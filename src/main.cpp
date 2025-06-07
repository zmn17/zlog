#include "../include/CLI11.hpp"
#include <ctime>
#include <fstream>
#include <iostream>

void print_help() {
    auto now =
        std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::cout << "📝 zlog CLI v1.0.0 — Markdown Learning Logger\n";
    std::cout << "   " << std::ctime(&now) << "\n";
    std::cout << R"(DESCRIPTION
  zlog is a lightweight command-line tool to track your learning progress,
  take notes, and log insights directly into Markdown (.md) files. Whether
  you're studying a topic, solving problems, or exploring ideas, zlog helps
  you keep a clean, timestamped record of your journey.

USAGE
  zlog [OPTIONS]

EXAMPLES
  zlog -t "C++ Smart Pointers" -p "Learned how unique_ptr works"
  zlog -p "Used stbi_load() to load images in OpenGL"
  zlog --show
  zlog --help

OPTIONS
  -t, --title       Set the title of the log entry (Markdown header)
  -p, --paragraph   Set the body/content of the log note
  -s, --show        Render the Markdown log in the terminal
  -f, --file        Specify output file (default: learning_log.md)
  -h, --help        Show this help message

OUTPUT
  Entries are appended to the target Markdown file in this format:

    ## 2025-06-07
    - [Title] Paragraph content goes here...

CONTACT
  Created by zamyn17 — GitHub: https://github.com/zmn17/zlog
)";
}

int main(int argc, char *argv[]) {
    CLI::App app;
    // disable the default help
    app.set_help_flag();

    bool show_help = false;

    std::string title, paragraph, filename;
    app.add_option("-t, --title", title, "Title for the log entry");
    app.add_option("-p, --paragraph", paragraph, "Note to log");
    app.add_option("-f, --file", filename, "Target markdown file");
    app.add_flag("-h, --help", show_help, "Show help screen");

    CLI11_PARSE(app, argc, argv);

    if (show_help || argc == 1) {
        print_help();
        return 0;
    }
    std::cout << "filename: " << filename << std::endl;

    std::ofstream file(filename);
    while (!file.is_open()) {
        std::cerr << "Failed to open the file to write" << std::endl;
        return 0;
    }
    file << "# " + title << std::endl;
    file << paragraph << std::endl;

    file.close();

    return 0;
}
