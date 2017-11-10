/*
 *  Phusion Passenger - https://www.phusionpassenger.com/
 *  Copyright (c) 2010-2017 Phusion Holding B.V.
 *
 *  "Passenger", "Phusion Passenger" and "Union Station" are registered
 *  trademarks of Phusion Holding B.V.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *  THE SOFTWARE.
 */

/*
 * ConfigGeneral/AutoGeneratedSetterFuncs.cpp is automatically generated from
 * ConfigGeneral/AutoGeneratedSetterFuncs.cpp.cxxcodebuilder,
 * using definitions from src/ruby_supportlib/phusion_passenger/apache2/config_options.rb.
 * Edits to ConfigGeneral/AutoGeneratedSetterFuncs.cpp will be lost.
 *
 * To update ConfigGeneral/AutoGeneratedSetterFuncs.cpp:
 *   rake apache2
 *
 * To force regeneration of ConfigGeneral/AutoGeneratedSetterFuncs.cpp:
 *   rm -f src/apache2_module/ConfigGeneral/AutoGeneratedSetterFuncs.cpp
 *   rake src/apache2_module/ConfigGeneral/AutoGeneratedSetterFuncs.cpp
 */

static const char *
cmd_passenger_root(cmd_parms *cmd, void *pcfg, const char *arg) {
	serverConfig.root = arg;
	return NULL;
}

static const char *
cmd_passenger_default_ruby(cmd_parms *cmd, void *pcfg, const char *arg) {
	serverConfig.defaultRuby = arg;
	return NULL;
}

static const char *
cmd_passenger_log_level(cmd_parms *cmd, void *pcfg, const char *arg) {
	char *end;
	long result;

	result = strtol(arg, &end, 10);
	if (*end != '\0') {
		string message = "Invalid number specified for ";
		message.append(cmd->directive->directive);
		message.append(".");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else if (result < 0) {
		string message = "Value for ";
		message.append(cmd->directive->directive);
		message.append(" must be greater than or equal to 0.");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else {
		serverConfig.logLevel = (int) result;
		return NULL;
	}
}

static const char *
cmd_passenger_log_file(cmd_parms *cmd, void *pcfg, const char *arg) {
	serverConfig.logFile = arg;
	return NULL;
}

static const char *
cmd_passenger_socket_backlog(cmd_parms *cmd, void *pcfg, const char *arg) {
	char *end;
	long result;

	result = strtol(arg, &end, 10);
	if (*end != '\0') {
		string message = "Invalid number specified for ";
		message.append(cmd->directive->directive);
		message.append(".");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else if (result < 0) {
		string message = "Value for ";
		message.append(cmd->directive->directive);
		message.append(" must be greater than or equal to 0.");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else {
		serverConfig.socketBacklog = (int) result;
		return NULL;
	}
}

static const char *
cmd_passenger_file_descriptor_log_file(cmd_parms *cmd, void *pcfg, const char *arg) {
	serverConfig.fileDescriptorLogFile = arg;
	return NULL;
}

static const char *
cmd_passenger_max_pool_size(cmd_parms *cmd, void *pcfg, const char *arg) {
	char *end;
	long result;

	result = strtol(arg, &end, 10);
	if (*end != '\0') {
		string message = "Invalid number specified for ";
		message.append(cmd->directive->directive);
		message.append(".");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else if (result < 1) {
		string message = "Value for ";
		message.append(cmd->directive->directive);
		message.append(" must be greater than or equal to 1.");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else {
		serverConfig.maxPoolSize = (int) result;
		return NULL;
	}
}

static const char *
cmd_passenger_pool_idle_time(cmd_parms *cmd, void *pcfg, const char *arg) {
	char *end;
	long result;

	result = strtol(arg, &end, 10);
	if (*end != '\0') {
		string message = "Invalid number specified for ";
		message.append(cmd->directive->directive);
		message.append(".");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else if (result < 0) {
		string message = "Value for ";
		message.append(cmd->directive->directive);
		message.append(" must be greater than or equal to 0.");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else {
		serverConfig.poolIdleTime = (int) result;
		return NULL;
	}
}

static const char *
cmd_passenger_response_buffer_high_watermark(cmd_parms *cmd, void *pcfg, const char *arg) {
	char *end;
	long result;

	result = strtol(arg, &end, 10);
	if (*end != '\0') {
		string message = "Invalid number specified for ";
		message.append(cmd->directive->directive);
		message.append(".");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else if (result < 0) {
		string message = "Value for ";
		message.append(cmd->directive->directive);
		message.append(" must be greater than or equal to 0.");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else {
		serverConfig.responseBufferHighWatermark = (int) result;
		return NULL;
	}
}

static const char *
cmd_passenger_user_switching(cmd_parms *cmd, void *pcfg, const char *arg) {
	serverConfig.userSwitching =
		arg ?
		ENABLED :
		DISABLED;
	return NULL;
}

static const char *
cmd_passenger_default_user(cmd_parms *cmd, void *pcfg, const char *arg) {
	serverConfig.defaultUser = arg;
	return NULL;
}

static const char *
cmd_passenger_default_group(cmd_parms *cmd, void *pcfg, const char *arg) {
	serverConfig.defaultGroup = arg;
	return NULL;
}

static const char *
cmd_passenger_data_buffer_dir(cmd_parms *cmd, void *pcfg, const char *arg) {
	serverConfig.dataBufferDir = arg;
	return NULL;
}

static const char *
cmd_passenger_instance_registry_dir(cmd_parms *cmd, void *pcfg, const char *arg) {
	serverConfig.instanceRegistryDir = arg;
	return NULL;
}

static const char *
cmd_passenger_disable_security_update_check(cmd_parms *cmd, void *pcfg, const char *arg) {
	serverConfig.disableSecurityUpdateCheck =
		arg ?
		ENABLED :
		DISABLED;
	return NULL;
}

static const char *
cmd_passenger_security_update_check_proxy(cmd_parms *cmd, void *pcfg, const char *arg) {
	serverConfig.securityUpdateCheckProxy = arg;
	return NULL;
}

static const char *
cmd_passenger_stat_throttle_rate(cmd_parms *cmd, void *pcfg, const char *arg) {
	char *end;
	long result;

	result = strtol(arg, &end, 10);
	if (*end != '\0') {
		string message = "Invalid number specified for ";
		message.append(cmd->directive->directive);
		message.append(".");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else {
		serverConfig.statThrottleRate = (int) result;
		return NULL;
	}
}

static const char *
cmd_passenger_pre_start(cmd_parms *cmd, void *pcfg, const char *arg) {
	serverConfig.prestartURLs.insert(arg);
	return NULL;
}

static const char *
cmd_passenger_turbocaching(cmd_parms *cmd, void *pcfg, const char *arg) {
	serverConfig.turbocaching =
		arg ?
		ENABLED :
		DISABLED;
	return NULL;
}

static const char *
cmd_passenger_ruby(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->ruby = arg;
	return NULL;
}

static const char *
cmd_passenger_python(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->python = arg;
	return NULL;
}

static const char *
cmd_passenger_nodejs(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->nodejs = arg;
	return NULL;
}

static const char *
cmd_passenger_meteor_app_settings(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->meteorAppSettings = arg;
	return NULL;
}

static const char *
cmd_passenger_app_env(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->appEnv = arg;
	return NULL;
}

static const char *
cmd_passenger_min_instances(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	char *end;
	long result;

	result = strtol(arg, &end, 10);
	if (*end != '\0') {
		string message = "Invalid number specified for ";
		message.append(cmd->directive->directive);
		message.append(".");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else if (result < 0) {
		string message = "Value for ";
		message.append(cmd->directive->directive);
		message.append(" must be greater than or equal to 0.");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else {
		config->minInstances = (int) result;
		return NULL;
	}
}

static const char *
cmd_passenger_max_instances_per_app(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	char *end;
	long result;

	result = strtol(arg, &end, 10);
	if (*end != '\0') {
		string message = "Invalid number specified for ";
		message.append(cmd->directive->directive);
		message.append(".");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else {
		config->maxInstancesPerApp = (int) result;
		return NULL;
	}
}

static const char *
cmd_passenger_user(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->user = arg;
	return NULL;
}

static const char *
cmd_passenger_group(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->group = arg;
	return NULL;
}

static const char *
cmd_passenger_error_override(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->errorOverride =
		arg ?
		ENABLED :
		DISABLED;
	return NULL;
}

static const char *
cmd_passenger_max_requests(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	char *end;
	long result;

	result = strtol(arg, &end, 10);
	if (*end != '\0') {
		string message = "Invalid number specified for ";
		message.append(cmd->directive->directive);
		message.append(".");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else if (result < 0) {
		string message = "Value for ";
		message.append(cmd->directive->directive);
		message.append(" must be greater than or equal to 0.");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else {
		config->maxRequests = (int) result;
		return NULL;
	}
}

static const char *
cmd_passenger_start_timeout(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	char *end;
	long result;

	result = strtol(arg, &end, 10);
	if (*end != '\0') {
		string message = "Invalid number specified for ";
		message.append(cmd->directive->directive);
		message.append(".");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else if (result < 1) {
		string message = "Value for ";
		message.append(cmd->directive->directive);
		message.append(" must be greater than or equal to 1.");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else {
		config->startTimeout = (int) result;
		return NULL;
	}
}

static const char *
cmd_passenger_high_performance(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->highPerformance =
		arg ?
		ENABLED :
		DISABLED;
	return NULL;
}

static const char *
cmd_passenger_enabled(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->enabled =
		arg ?
		ENABLED :
		DISABLED;
	return NULL;
}

static const char *
cmd_passenger_max_request_queue_size(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	char *end;
	long result;

	result = strtol(arg, &end, 10);
	if (*end != '\0') {
		string message = "Invalid number specified for ";
		message.append(cmd->directive->directive);
		message.append(".");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else if (result < 0) {
		string message = "Value for ";
		message.append(cmd->directive->directive);
		message.append(" must be greater than or equal to 0.");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else {
		config->maxRequestQueueSize = (int) result;
		return NULL;
	}
}

static const char *
cmd_passenger_max_preloader_idle_time(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	char *end;
	long result;

	result = strtol(arg, &end, 10);
	if (*end != '\0') {
		string message = "Invalid number specified for ";
		message.append(cmd->directive->directive);
		message.append(".");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else if (result < 0) {
		string message = "Value for ";
		message.append(cmd->directive->directive);
		message.append(" must be greater than or equal to 0.");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else {
		config->maxPreloaderIdleTime = (int) result;
		return NULL;
	}
}

static const char *
cmd_passenger_load_shell_envvars(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->loadShellEnvvars =
		arg ?
		ENABLED :
		DISABLED;
	return NULL;
}

static const char *
cmd_passenger_buffer_upload(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->bufferUpload =
		arg ?
		ENABLED :
		DISABLED;
	return NULL;
}

static const char *
cmd_passenger_app_type(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->appType = arg;
	return NULL;
}

static const char *
cmd_passenger_startup_file(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->startupFile = arg;
	return NULL;
}

static const char *
cmd_passenger_sticky_sessions(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->stickySessions =
		arg ?
		ENABLED :
		DISABLED;
	return NULL;
}

static const char *
cmd_passenger_sticky_sessions_cookie_name(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->stickySessionsCookieName =
		arg ?
		ENABLED :
		DISABLED;
	return NULL;
}

static const char *
cmd_passenger_show_version_in_header(cmd_parms *cmd, void *pcfg, const char *arg) {
	serverConfig.showVersionInHeader =
		arg ?
		ENABLED :
		DISABLED;
	return NULL;
}

static const char *
cmd_passenger_friendly_error_pages(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->friendlyErrorPages =
		arg ?
		ENABLED :
		DISABLED;
	return NULL;
}

static const char *
cmd_passenger_restart_dir(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->restartDir = arg;
	return NULL;
}

static const char *
cmd_passenger_app_group_name(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->appGroupName = arg;
	return NULL;
}

static const char *
cmd_passenger_force_max_concurrent_requests_per_process(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	char *end;
	long result;

	result = strtol(arg, &end, 10);
	if (*end != '\0') {
		string message = "Invalid number specified for ";
		message.append(cmd->directive->directive);
		message.append(".");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else {
		config->forceMaxConcurrentRequestsPerProcess = (int) result;
		return NULL;
	}
}

static const char *
cmd_passenger_lve_min_uid(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	char *end;
	long result;

	result = strtol(arg, &end, 10);
	if (*end != '\0') {
		string message = "Invalid number specified for ";
		message.append(cmd->directive->directive);
		message.append(".");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else if (result < 0) {
		string message = "Value for ";
		message.append(cmd->directive->directive);
		message.append(" must be greater than or equal to 0.");

		char *messageStr = (char *) apr_palloc(cmd->temp_pool,
			message.size() + 1);
		memcpy(messageStr, message.c_str(), message.size() + 1);
		return messageStr;
	} else {
		config->lveMinUid = (int) result;
		return NULL;
	}
}

static const char *
cmd_passenger_app_root(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->appRoot = arg;
	return NULL;
}

static const char *
cmd_passenger_buffer_response(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->bufferResponse =
		arg ?
		ENABLED :
		DISABLED;
	return NULL;
}

static const char *
cmd_passenger_resolve_symlinks_in_document_root(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->resolveSymlinksInDocumentRoot =
		arg ?
		ENABLED :
		DISABLED;
	return NULL;
}

static const char *
cmd_passenger_allow_encoded_slashes(cmd_parms *cmd, void *pcfg, const char *arg) {
	DirConfig *config = (DirConfig *) pcfg;
	config->allowEncodedSlashes =
		arg ?
		ENABLED :
		DISABLED;
	return NULL;
}

static const char *
cmd_rails_spawn_server(cmd_parms *cmd, void *pcfg, const char *arg) {
	fprintf(stderr, "WARNING: The 'RailsSpawnServer' option is obsolete. Please specify 'PassengerRoot' instead. The correct value was given to you by 'passenger-install-apache2-module'.\n");
	fflush(stderr);
	return NULL;
}

static const char *
cmd_rails_allow_mod_rewrite(cmd_parms *cmd, void *pcfg, const char *arg) {
	fprintf(stderr, "WARNING: The 'RailsAllowModRewrite' option is obsolete: Phusion Passenger now fully supports mod_rewrite. Please remove this option from your configuration file.\n");
	fflush(stderr);
	return NULL;
}

static const char *
cmd_rails_framework_spawner_idle_time(cmd_parms *cmd, void *pcfg, const char *arg) {
	fprintf(stderr, "WARNING: The 'RailsFrameworkSpawnerIdleTime' option is obsolete. Please use 'PassengerMaxPreloaderIdleTime' instead.\n");
	fflush(stderr);
	return NULL;
}

static const char *
cmd_passenger_use_global_queue(cmd_parms *cmd, void *pcfg, const char *arg) {
	fprintf(stderr, "WARNING: The 'PassengerUseGlobalQueue' option is obsolete: global queueing is now always turned on. Please remove this option from your configuration file.\n");
	fflush(stderr);
	return NULL;
}

static const char *
cmd_union_station_gateway_address(cmd_parms *cmd, void *pcfg, const char *arg) {
	fprintf(stderr, "WARNING: The 'UnionStationGatewayAddress' option is obsolete. Please remove this option from your configuration file.\n");
	fflush(stderr);
	return NULL;
}

static const char *
cmd_union_station_gateway_port(cmd_parms *cmd, void *pcfg, const char *arg) {
	fprintf(stderr, "WARNING: The 'UnionStationGatewayPort' option is obsolete. Please remove this option from your configuration file.\n");
	fflush(stderr);
	return NULL;
}

static const char *
cmd_union_station_gateway_cert(cmd_parms *cmd, void *pcfg, const char *arg) {
	fprintf(stderr, "WARNING: The 'UnionStationGatewayCert' option is obsolete. Please remove this option from your configuration file.\n");
	fflush(stderr);
	return NULL;
}

static const char *
cmd_union_station_proxy_address(cmd_parms *cmd, void *pcfg, const char *arg) {
	fprintf(stderr, "WARNING: The 'UnionStationProxyAddress' option is obsolete. Please remove this option from your configuration file.\n");
	fflush(stderr);
	return NULL;
}

static const char *
cmd_passenger_analytics_log_user(cmd_parms *cmd, void *pcfg, const char *arg) {
	fprintf(stderr, "WARNING: The 'PassengerAnalyticsLogUser' option is obsolete. Please remove this option from your configuration file.\n");
	fflush(stderr);
	return NULL;
}

static const char *
cmd_passenger_analytics_log_group(cmd_parms *cmd, void *pcfg, const char *arg) {
	fprintf(stderr, "WARNING: The 'PassengerAnalyticsLogGroup' option is obsolete. Please remove this option from your configuration file.\n");
	fflush(stderr);
	return NULL;
}

static const char *
cmd_union_station_key(cmd_parms *cmd, void *pcfg, const char *arg) {
	fprintf(stderr, "WARNING: The 'UnionStationKey' option is obsolete. Please remove this option from your configuration file.\n");
	fflush(stderr);
	return NULL;
}

static const char *
cmd_union_station_filter(cmd_parms *cmd, void *pcfg, const char *arg) {
	fprintf(stderr, "WARNING: The 'UnionStationFilter' option is obsolete. Please remove this option from your configuration file.\n");
	fflush(stderr);
	return NULL;
}

static const char *
cmd_union_station_support(cmd_parms *cmd, void *pcfg, const char *arg) {
	fprintf(stderr, "WARNING: The 'UnionStationSupport' option is obsolete. Please remove this option from your configuration file.\n");
	fflush(stderr);
	return NULL;
}

