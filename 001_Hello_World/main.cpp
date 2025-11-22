// The QCoreApplication header defines the QCoreApplication class.
// This class is the foundation for any **non-GUI** Qt application.
// It manages high-level application behavior such as:
//   - the event loop,
//   - event delivery,
//   - application-wide settings,
//   - and interaction with the operating system.
#include <QCoreApplication>

// The QDebug header provides Qt’s logging functions,
// such as qInfo(), qWarning(), qCritical(), and qDebug().
// These are preferred over std::cout because they:
//   - automatically format output,
//   - are thread-safe,
//   - integrate with Qt’s message handling system,
//   - can be redirected or filtered.
#include <QDebug>

// main() is the entry point of every C++ program.
// Qt requires passing command-line arguments to its application class
// so it can process Qt-specific command flags.
int main(int argc, char *argv[])
{
    // Create the QCoreApplication instance named 'a'.
    // In Qt, we must create exactly one application object in main().
    //
    // Responsibilities of QCoreApplication:
    //   - Initializes Qt’s internal systems.
    //   - Stores global application information.
    //   - Manages the event loop, which is the heart of Qt.
    //
    // argc/argv allow Qt to parse command-line options like:
    //   --help, -platform, etc.
    QCoreApplication a(argc, argv);

    // qInfo() is a Qt logging function.
    // It prints informational messages intended for normal program output.
    //
    // Important details:
    //   - It automatically adds spaces between arguments.
    //   - It ends with a newline automatically.
    //   - It uses Qt's message system, which can be customized
    //     (e.g., log to file, filter logs, handle logs differently in release builds).
    //
    // This will output: "Hello World" to the console.
    qInfo() << "Hello World";

    // a.exec() starts Qt’s **event loop**.
    // The event loop is the system that:
    //   - waits for events (timers, I/O, signals, etc.),
    //   - dispatches them to Qt objects,
    //   - keeps the application responsive.
    //
    // Without calling exec(), a Qt application will immediately exit.
    //
    // QCoreApplication's event loop is essential even in console apps
    // if we use:
    //   - QTimer
    //   - QThread
    //   - QNetworkAccessManager
    //   - signals and slots
    //   - asynchronous operations
    //
    // Returning exec() makes the program keep running
    // until quit() or exit() is called.
    return a.exec();
}
