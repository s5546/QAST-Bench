/*
This file is part of QAST Bench.

    QAST Bench is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    QAST Bench is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with QAST Bench.  If not, see <https://www.gnu.org/licenses/>.
*/
// imports
#include <iostream>
class QASTModel {
    // init func
    //	in: null
    //	out: exit status
    //	purpose: to make the user agree to the dangers of stress testing and benchmarking. Asks only once, then logs to "%appdata%/QAST-Bench/agree.txt". todo: determine return statuses, document them
    int firstInit() {

    }

    // check and download func
    //	in: optional string representing the directory to download bench/stress programs to. Defaults to %LOCALAPPDATA%/QAST-Bench if not found.
    //	out: exit status
    //	purpose: checks if needed binaries are downloaded; if so, runs them. Otherwise, gets all files needed from URLs. todo: determine return statuses, document them
    int loadTesters() {

    }

    //Benchmark Function
    //	in: a list of all tests wanted, pass nothing in to use all tests
    //	out: a dict with all performance metrics
    //	purpose: runs multiple benchmarks to determine current system performance.

    //CPU stress function
    //	in: null
    //	out: exit status
    //	purpose: initalizes a new cpu stress test. todo: determine return statuses, document them

    //GPU stress function
    //	in: null
    //	out: exit status
    //	purpose: initalizes a new cpu stress test. todo: determine return statuses, document them
    int gpuStressStart() {

    }

    int gpuStressStop() {

    }

    //final calc func
    //	in: a dictionary with scores of each test(any values left blank are assumed to be zero)
    //	out: final score of program, as a double(maybe?)
    //	purpose: only to be called from log function

    //Log function
    //	in: 1) a dictionary with scores of each test(any values left blank are assumed to be zero)


    // <<< MAIN >>>
    int main()
    {
        std::cout << "Hello World!";
        //check first - time

        //init temp

        //full bench

        //stress CPU

        //full bench

        //stress GPU

        //full bench

        //stress CPU while GPU benchmarks

        //stress GPU while CPU benchmarks
    }

};