/*
 * ______________________.___
 * \_   _____/\_   _____/|   |
 *  |    __)_  |    __)  |   |
 *  |        \ |     \   |   |
 * /_______  / \___  /   |___|
 *         \/      \/
 * ________  ____  ______________
 * \______ \ \   \/  /\_   _____/
 *  |    |  \ \     /  |    __)_
 *  |    `   \/     \  |        \
 *  /_______  /___/\  \/_______  /
 *          \/      \_/        \/
 * ___________             .__          __
 * \_   _____/ _____  __ __|  | _____ _/  |_  ___________
 *  |    __)_ /     \|  |  \  | \__  \\   __\/  _ \_  __ \
 *  |        \  Y Y  \  |  /  |__/ __ \|  | (  <_> )  | \/
 * /_______  /__|_|  /____/|____(____  /__|  \____/|__|
 *         \/      \/                \/
 *
 * EFI DXE Emulator
 *
 * An EFI DXE binary emulator based on Unicorn Engine
 *
 * Created by fG! on 05/06/16.
 * Copyright © 2016-2019 Pedro Vilaca. All rights reserved.
 * reverser@put.as - https://reverse.put.as
 *
 * unicorn_macros.h
 *
 * Macros to be used with Unicorn functions
 *
 * All advertising materials mentioning features or use of this software must display
 * the following acknowledgement: This product includes software developed by
 * Pedro Vilaca.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 
 * 1. Redistributions of source code must retain the above copyright notice, this list
 * of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice, this
 * list of conditions and the following disclaimer in the documentation and/or
 * other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software must
 * display the following acknowledgement: This product includes software developed
 * by Pedro Vilaca.
 * 4. Neither the name of the author nor the names of its contributors may be
 * used to endorse or promote products derived from this software without specific
 * prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#pragma once

#include <unicorn/unicorn.h>
#include "logging.h"

#define VERIFY_UC_OPERATION_RET(error, ret, fmt, ...) if ((error) != UC_ERR_OK) { fprintf(stderr, "[ERROR] " fmt ": %s (%d) @ line %d of %s()\n", ## __VA_ARGS__, uc_strerror((error)), (error), __LINE__, __func__); return (ret);}

#define VERIFY_UC_OPERATION_VOID(error, fmt, ...) if ((error) != UC_ERR_OK) { fprintf(stderr, "[ERROR] " fmt ": %s (%d) @ line %d of %s()\n", ## __VA_ARGS__, uc_strerror((error)), (error), __LINE__, __func__); return;}

#define VERIFY_UC_OPERATION_NORET(error, fmt, ...) if ((error) != UC_ERR_OK) { fprintf(stderr, "[ERROR] " fmt ": %s (%d) @ line %d of %s()\n", ## __VA_ARGS__, uc_strerror((error)), (error), __LINE__, __func__); }
