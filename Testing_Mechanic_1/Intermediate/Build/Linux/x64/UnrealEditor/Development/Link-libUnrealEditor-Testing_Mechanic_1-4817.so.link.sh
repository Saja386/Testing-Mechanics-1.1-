#!/bin/sh
# Automatically generated by UnrealBuildTool
# *DO NOT EDIT*

set -o errexit
"/home/sage/Apps/GameMaking/Linux_Unreal_Engine_5.4.4/Engine/Extras/ThirdPartyNotUE/SDKs/HostLinux/Linux_x64/v22_clang-16.0.6-centos7/x86_64-unknown-linux-gnu/bin/clang++" --driver-mode=g++ -fuse-ld=lld -rdynamic -shared -Wl,--gdb-index -Wl,-rpath='${ORIGIN}' -Wl,-rpath-link='${ORIGIN}' -Wl,-rpath='${ORIGIN}'/.. -Wl,-rpath='${ORIGIN}'/../../../Engine/Binaries/ThirdParty/Qualcomm/Linux -Wl,-rpath='${ORIGIN}'/../../../Engine/Binaries/ThirdParty/PhysX3/Unix/x86_64-unknown-linux-gnu -Wl,-rpath='${ORIGIN}'/../../../Engine/Binaries/ThirdParty/Intel/Embree/Embree2140/Linux/x86_64-unknown-linux-gnu/lib -Wl,--disable-new-dtags -Wl,--as-needed -Wl,--hash-style=gnu -Wl,--build-id -target x86_64-unknown-linux-gnu --sysroot="../Extras/ThirdPartyNotUE/SDKs/HostLinux/Linux_x64/v22_clang-16.0.6-centos7/x86_64-unknown-linux-gnu" -B"../Extras/ThirdPartyNotUE/SDKs/HostLinux/Linux_x64/v22_clang-16.0.6-centos7/x86_64-unknown-linux-gnu/usr/lib" -B"../Extras/ThirdPartyNotUE/SDKs/HostLinux/Linux_x64/v22_clang-16.0.6-centos7/x86_64-unknown-linux-gnu/usr/lib64" -L"../Extras/ThirdPartyNotUE/SDKs/HostLinux/Linux_x64/v22_clang-16.0.6-centos7/x86_64-unknown-linux-gnu/usr/lib" -L"../Extras/ThirdPartyNotUE/SDKs/HostLinux/Linux_x64/v22_clang-16.0.6-centos7/x86_64-unknown-linux-gnu/usr/lib64" -o "/home/sage/Documents/GitHub/Testing_Mechanic_1/Testing_Mechanic_1/Binaries/Linux/libUnrealEditor-Testing_Mechanic_1-4817.so" -Wl,@"/home/sage/Documents/GitHub/Testing_Mechanic_1/Testing_Mechanic_1/Intermediate/Build/Linux/x64/UnrealEditor/Development/Testing_Mechanic_1/libUnrealEditor-Testing_Mechanic_1-4817.so.rsp" -Wl,--start-group -lpthread -ldl -lUnrealEditor-Engine -lUnrealEditor-Core -lUnrealEditor-CoreUObject -lUnrealEditor-InputCore -lUnrealEditor-EnhancedInput -Wl,--unresolved-symbols=ignore-in-shared-libs -Wl,--end-group -lrt -lm -nodefaultlibs -LThirdParty/Unix/LibCxx/lib/Unix/x86_64-unknown-linux-gnu/ ThirdParty/Unix/LibCxx/lib/Unix/x86_64-unknown-linux-gnu/libc++.a ThirdParty/Unix/LibCxx/lib/Unix/x86_64-unknown-linux-gnu/libc++abi.a -lm -lc -lpthread -lgcc_s -lgcc
"/home/sage/Apps/GameMaking/Linux_Unreal_Engine_5.4.4/Engine/Binaries/Linux/dump_syms" -c -o "/home/sage/Documents/GitHub/Testing_Mechanic_1/Testing_Mechanic_1/Intermediate/Build/Linux/x64/UnrealEditor/Development/libUnrealEditor-Testing_Mechanic_1-4817.so.psym" "/home/sage/Documents/GitHub/Testing_Mechanic_1/Testing_Mechanic_1/Binaries/Linux/libUnrealEditor-Testing_Mechanic_1-4817.so"
"/home/sage/Apps/GameMaking/Linux_Unreal_Engine_5.4.4/Engine/Binaries/Linux/BreakpadSymbolEncoder" "/home/sage/Documents/GitHub/Testing_Mechanic_1/Testing_Mechanic_1/Intermediate/Build/Linux/x64/UnrealEditor/Development/libUnrealEditor-Testing_Mechanic_1-4817.so.psym" "/home/sage/Documents/GitHub/Testing_Mechanic_1/Testing_Mechanic_1/Binaries/Linux/libUnrealEditor-Testing_Mechanic_1-4817.sym"
"/home/sage/Apps/GameMaking/Linux_Unreal_Engine_5.4.4/Engine/Extras/ThirdPartyNotUE/SDKs/HostLinux/Linux_x64/v22_clang-16.0.6-centos7/x86_64-unknown-linux-gnu/bin/llvm-objcopy" --strip-all "/home/sage/Documents/GitHub/Testing_Mechanic_1/Testing_Mechanic_1/Binaries/Linux/libUnrealEditor-Testing_Mechanic_1-4817.so" "/home/sage/Documents/GitHub/Testing_Mechanic_1/Testing_Mechanic_1/Intermediate/Build/Linux/x64/UnrealEditor/Development/libUnrealEditor-Testing_Mechanic_1-4817.so_nodebug"
"/home/sage/Apps/GameMaking/Linux_Unreal_Engine_5.4.4/Engine/Extras/ThirdPartyNotUE/SDKs/HostLinux/Linux_x64/v22_clang-16.0.6-centos7/x86_64-unknown-linux-gnu/bin/llvm-objcopy" --only-keep-debug "/home/sage/Documents/GitHub/Testing_Mechanic_1/Testing_Mechanic_1/Binaries/Linux/libUnrealEditor-Testing_Mechanic_1-4817.so" "/home/sage/Documents/GitHub/Testing_Mechanic_1/Testing_Mechanic_1/Binaries/Linux/libUnrealEditor-Testing_Mechanic_1-4817.debug"
"/home/sage/Apps/GameMaking/Linux_Unreal_Engine_5.4.4/Engine/Extras/ThirdPartyNotUE/SDKs/HostLinux/Linux_x64/v22_clang-16.0.6-centos7/x86_64-unknown-linux-gnu/bin/llvm-objcopy" --add-gnu-debuglink="/home/sage/Documents/GitHub/Testing_Mechanic_1/Testing_Mechanic_1/Binaries/Linux/libUnrealEditor-Testing_Mechanic_1-4817.debug" "/home/sage/Documents/GitHub/Testing_Mechanic_1/Testing_Mechanic_1/Intermediate/Build/Linux/x64/UnrealEditor/Development/libUnrealEditor-Testing_Mechanic_1-4817.so_nodebug" "/home/sage/Documents/GitHub/Testing_Mechanic_1/Testing_Mechanic_1/Binaries/Linux/libUnrealEditor-Testing_Mechanic_1-4817.so.temp"
mv "/home/sage/Documents/GitHub/Testing_Mechanic_1/Testing_Mechanic_1/Binaries/Linux/libUnrealEditor-Testing_Mechanic_1-4817.so.temp" "/home/sage/Documents/GitHub/Testing_Mechanic_1/Testing_Mechanic_1/Binaries/Linux/libUnrealEditor-Testing_Mechanic_1-4817.so"
chmod 644 "/home/sage/Documents/GitHub/Testing_Mechanic_1/Testing_Mechanic_1/Binaries/Linux/libUnrealEditor-Testing_Mechanic_1-4817.debug"

