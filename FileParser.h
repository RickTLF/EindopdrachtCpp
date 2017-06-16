#pragma once

class FileParser {
public:
	FileParser(char* fileName);
	void overwrite(char* line);
	void append(char* line);
	int cnt_lines(void);
	char* get_line_at(int lineIndex);
	void delete_file(void);

private:
	char* fileName;
	bool does_file_exist(char* fileName);
	bool is_file_open(char* fileName);
	void create_file(char* fileName);
};
