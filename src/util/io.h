/*
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "runtime/exception.h"
#include "runtime/object.h"
#include "runtime/string_ref.h"
// #region agent log
#if defined(LEAN_EMSCRIPTEN)
#include <emscripten.h>
#endif
// #endregion

namespace lean {
extern "C" object* lean_io_error_to_string(object * err);

template<typename T> T get_io_result(object * o) {
    if (io_result_is_error(o)) {
        object * err_obj = io_result_get_error(o);
        inc(err_obj);
        dec(o);
        string_ref error(lean_io_error_to_string(err_obj));
        throw exception(error.to_std_string());
    } else {
        T r(io_result_get_value(o), true);
        dec(o);
        return r;
    }
}

inline void consume_io_result(object * o) {
    if (io_result_is_error(o)) {
        object * err_obj = io_result_get_error(o);
        inc(err_obj);
        dec(o);
        string_ref error(lean_io_error_to_string(err_obj));
        // #region agent log
#if defined(LEAN_EMSCRIPTEN)
        EM_ASM({
            console.log("[DEBUG:IO_ERROR] IO result error: " + UTF8ToString($0));
        }, error.data());
#endif
        // #endregion
        throw exception(error.to_std_string());
    }
    dec(o);
}

template<typename T> T get_io_scalar_result(object * o) {
    if (io_result_is_error(o)) {
        object * err_obj = io_result_get_error(o);
        inc(err_obj);
        dec(o);
        string_ref error(lean_io_error_to_string(err_obj));
        throw exception(error.to_std_string());
    } else {
        T r = unbox(io_result_get_value(o));
        dec(o);
        return r;
    }
}

}
