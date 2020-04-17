/*
ANALIZO ALERT: this file was copied here from httpd-2.4.38 as is just
               to be used as input on analizo testsuite in order to
               fix the issue #155
               https://github.com/analizo/analizo/issues/155

*/

/* Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * @file mod_suexec.h
 * @brief SuExec Extension Module for Apache
 *
 * @defgroup MOD_SUEXEC mod_suexec
 * @ingroup  APACHE_MODS
 * @{
 */

#include "unixd.h"

typedef struct {
    ap_unix_identity_t ugid;
    int active;
} suexec_config_t;

/** @}*/