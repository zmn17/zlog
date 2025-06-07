# 📝 zlog CLI v1.0.0 — Markdown Learning Logger

`zlog` is a lightweight and user-friendly command-line tool designed to help you track your learning progress, capture insights, and organize notes into clean, timestamped Markdown files.

Whether you're learning to code, solving problems, or diving into new topics, `zlog` helps you document your journey directly from the terminal.

---

## 📦 Features

- ✅ Append notes or logs with titles
- ✅ Saves in Markdown format (`.md`)
- ✅ Auto timestamps your entries
- ✅ Easily render logs in the terminal
- ✅ Minimal setup and zero dependencies (except [CLI11](https://github.com/CLIUtils/CLI11))

---

## 🧠 Usage

```bash
zlog [OPTIONS]
```

### Examples

```bash
zlog -t "C++ Smart Pointers" -p "Learned how unique_ptr works"
zlog -p "Used stbi_load() to load images in OpenGL"
zlog --show
zlog --help
```

---

## 🛠️ Options

| Option             | Description                                              |
|--------------------|----------------------------------------------------------|
| `-t, --title`      | Set the title of the log entry (Markdown header)         |
| `-p, --paragraph`  | Set the body/content of the log note                     |
| `-s, --show`       | Render the Markdown log in the terminal                  |
| `-f, --file`       | Specify output file (default: `learning_log.md`)         |
| `-h, --help`       | Show the help message                                    |

---

## 📄 Output Format

Each log entry is appended in Markdown like this:

```markdown
## 2025-06-07
- [C++ Smart Pointers] Learned how unique_ptr works
```

---

## ⚙️ Installation

### Clone and Build

```bash
git clone https://github.com/zamyn17/zlog.git
cd zlog
mkdir build && cd build
cmake ..
make
./zlog --help
```

Make sure [CLI11](https://github.com/CLIUtils/CLI11) is available in `external/CLI/CLI.hpp` or in your system path.

---

## 🤝 Contributing

Contributions, suggestions, and issues are welcome. Open a pull request or create an issue if you have ideas or improvements.

---

## 📬 Contact

Created by [zmn17](https://github.com/zmn17)  
Feel free to reach out or star the repo if you find it helpful!

