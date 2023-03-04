#include "program/SubProgram.h"
#include "utilities/StringUtils.h"
#include "program/programs/strongholdtriangulator/StrongholdTriangulator.h"
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int run() {
    // Initialization
    cout << "[" << StringUtils::time() << "] [INFO] : UI Initialized, welcome to AVA v0.1 (Assortment of Versatile Applications)." << endl;
    cout << "      ___                         ___\n"
            "     /\\  \\          ___          /\\  \\\n"
            "    /::\\  \\        /\\  \\        /::\\  \\\n"
            "   /:/\\:\\  \\       \\:\\  \\      /:/\\:\\  \\\n"
            "  /:/ /::\\  \\       \\:\\  \\    /:/ /::\\  \\\n"
            " /:/_/:/\\:\\__\\  ___  \\:\\__\\  /:/_/:/\\:\\__\\\n"
            " \\:\\/:/  \\/__/ /\\  \\ |:|  |  \\:\\/:/  \\/__/\n"
            "  \\::/__/      \\:\\  \\|:|  |   \\::/__/\n"
            "   \\:\\  \\       \\:\\__|:|__|    \\:\\  \\\n"
            "    \\:\\__\\       \\____/__/      \\:\\__\\\n"
            "     \\/__/                       \\/__/" << endl << endl;
    cout << "Date: " << StringUtils::date() << endl;

    // Input Loop
    string input;

    while (true) {
        cout << "  > ";

        getline(cin, input);
        vector<string> args = StringUtils::split(input, ' ');
        // TODO: CommandExecutor automatically handle these
        if (args[0] == "stop") break;
        if (args[0] == "run") {
            STri::StrongholdTriangulator stri("Stronghold Triangulator");
            cout << "[" << StringUtils::time() << "] [INFO] : Initializing Stronghold Triangulator..." << endl << endl;
            int code = stri.run();
            cout << endl << "[" << StringUtils::time() << "] [INFO] : Stronghold Triangular finished with exit code " << code << "." << endl;
        }
        cin.ignore(); // Flushing prevents the getline() from being skipped after next iteration.
    }
    return 0;
}

int main() {
    return run();
}