struct cmd_options{
	char* config_file;
	char* ppath;
	int show_help;
};
typedef struct cmd_options cmd_options;

void parse_command(int argc, char** argv, cmd_options* opts);

