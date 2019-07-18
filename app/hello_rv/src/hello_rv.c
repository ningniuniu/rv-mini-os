/*
 * Copyright 2018 Rockchip Electronics Co., Ltd. All Rights Reserved.
 * author: hertz.wang, wangh@rock-chips.com
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>

// The header is generated by HELLO_RV_AUTOCONFIGS
#include <autoconfig/hello_rv_autoconf.h>

#include "include/hello_rv.h"

int main() {
	printf("hello rv start: \n");
	print_smile();

// Try to change 'RV_TARGET_HELLO_AUTOTOOLS' to y in app/hello/hello_autotools.rvmk,
// you will see '#define HELLO_AUTOTOOLS 1' in hello_rv_autoconf.h.
#if HELLO_AUTOTOOLS
	printf("example [HELLO_AUTOTOOLS] should not set.\n");
#else
	printf("example [HELLO_AUTOTOOLS] not set, meet the expection.\n");
#endif

	// HELLO_RV_EXTRA_PRINT_STRING come from hello_rv_autoconf.h
	printf("print extra string: %s\n", HELLO_RV_EXTRA_PRINT_STRING);
	return 0;
}
