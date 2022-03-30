#!/bin/bash

clear
echo -e "lead ps : "
read p1

RED='\033[0;31m'
NC='\033[0m'

# startTime=$(date +%s);
# endTime=$(date +%s);
# totalTime=$(($endTime-$startTime));
# echo -e "Execution time : ${RED}$totalTime ${NC}sec";


clear
echo -e "\n\033\033[32;1m" server pid : ...$p1"\033[m"
echo -e "\n"
echo -e "\n\033\033[32;1m" Error Case Test... "\033[m"
echo -e "\n"
echo -e "\n\033\033[32;1m"-- ./client pid msg --"\033[m"
read $a
echo -e "\n\033\033[32;1m"./client pid"\033[m"
read $a
./client_src/client $p1
echo -e "\n\033\033[32;1m"./client"\033[m"
read $a
./client_src/client
read $a




clear
echo -e "\n\033\033[32;1m" server pid : ...$p1"\033[m"
echo -e "\n"
echo -e "\n\033\033[32;1m" Basic Case Test... "\033[m"
echo -e "\n\033\033[32;1m"0123456789"\033[m"
read $a
startTime=$(date +%s);
./client_src/client $p1 "0123456789"
endTime=$(date +%s);
totalTime=$(($endTime-$startTime));
echo -e "Execution time : ${RED}$totalTime ${NC}sec";
read $a







clear
echo -e "\n\033\033[32;1m" server pid : ...$p1"\033[m"
echo -e "\n"
echo -e "\n\033\033[32;1m" Basic Case Test... "\033[m"
echo -e "\n\033\033[32;1m"abcdefghijklmnopqrstuvwxyz"\033[m"
read $a
startTime=$(date +%s);
./client_src/client $p1 "abcdefghijklmnopqrstuvwxyz"
endTime=$(date +%s);
totalTime=$(($endTime-$startTime));
echo -e "Execution time : ${RED}$totalTime ${NC}sec";
read $a

clear
echo -e "\n\033\033[32;1m" server pid : ...$p1"\033[m"
echo -e "\n"
echo -e "\n\033\033[32;1m" 300 over - Case Test... "\033[m"
echo -e "\n\033\033[32;1m"0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz"\033[m"
read $a
startTime=$(date +%s);
./client_src/client $p1 "0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz"
endTime=$(date +%s);
totalTime=$(($endTime-$startTime));
echo -e "Execution time : ${RED}$totalTime ${NC}sec";
read $a

clear
echo -e "\n\033\033[32;1m" server pid : ...$p1"\033[m"
echo -e "\n"
echo -e "\n\033\033[32;1m" 1000 over - Case Test... "\033[m"
echo -e "\n\033\033[32;1m"0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz"\033[m"
read $a
startTime=$(date +%s);
./client_src/client $p1 "0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz"
endTime=$(date +%s);
totalTime=$(($endTime-$startTime));
echo -e "Execution time : ${RED}$totalTime ${NC}sec";
read $a

clear
echo -e "\n\033\033[32;1m" server pid : ...$p1"\033[m"
echo -e "\n"
echo -e "\n\033\033[32;1m" unicode Case Test... "\033[m"
echo -e "\n\033\033[32;1m"😀 😃 😄 😁 😆 😅 😂 🤣 😇 😉 😊 🙂 🙃 ☺ 😋 😌 😍 🥰 😘 😗 😙 😚 🥲 🤪 😜 😝 😛 🤑 😎 🤓 🥸 🧐 🤠 🥳 🤗 🤡 😏 😶 😐 😑 😒 🙄 🤨 🤔 🤫 🤭 🤥 😳 😞 😟 😠 😡 🤬 😔 😕 🙁 ☹ 😬 🥺 😣 😖 😫 😩 🥱 😤 😮‍💨 😮 😱 😨 😰 😯 😦 😧 😢 😥 😪 🤤 😓 😭 🤩 😵 😵‍💫 🥴 😲 🤯 🤐 😷 🤕 🤒 🤮 🤢 🤧 🥵 🥶 😶‍🌫️ 😴 💤 😈 👿 👹 👺 💩 👻 💀 ☠ 👽 🤖 🎃 😺 😸 😹 😻 😼 😽 🙀 😿 😾 👐 🤲 🙌 👏 🙏 🤝 👍 👎 👊 ✊ 🤛 🤜 🤞 ✌ 🤘 🤟 👌 🤌 🤏 👈 👉 👆 👇 ☝ ✋ 🤚 🖐 🖖 👋 🤙 💪 🦾 🖕 ✍ 🤳 💅 🦵 🦿 🦶 👄 🦷 👅 👂 🦻 👃 👁 👀 🧠 🫀 🫁 🦴 👤 👥 🗣 🫂 👶 👧 🧒 👦 👩 🧑 👨 👩‍🦱 🧑‍🦱 👨‍🦱 👩‍🦰 🧑‍🦰 👨‍🦰 👱‍♀️ 👱 👱‍♂️ 👩‍🦳 🧑‍🦳 👨‍🦳 👩‍🦲 🧑‍🦲 👨‍🦲 🧔‍♀️ 🧔 🧔‍♂️ 👵 🧓 👴 👲 👳‍♀️ 👳 👳‍♂️ 🧕 👼 👸 🤴 👰 👰‍♀️ 👰‍♂️ 🤵‍♀️ 🤵 🤵‍♂️ 🙇‍♀️ 🙇 🙇‍♂️ 💁‍♀️ 💁 💁‍♂️ 🙅‍♀️ 🙅 🙅‍♂️ 🙆‍♀️ 🙆 🙆‍♂️ 🤷‍♀️ 🤷 🤷‍♂️ 🙋‍♀️ 🙋 🙋‍♂️ 🤦‍♀️ 🤦 🤦‍♂️ 🧏‍♀️ 🧏 🧏‍♂️ 🙎‍♀️ 🙎 🙎‍♂️ 🙍‍♀️ 🙍 🙍‍♂️ 💇‍♀️ 💇 💇‍♂️ 💆‍♀️ 💆 💆‍♂️ 🤰 🤱 👩‍🍼 🧑‍🍼 👨‍🍼 🧎‍♀️ 🧎 🧎‍♂️ 🧍‍♀️ 🧍 🧍‍♂️ 🚶‍♀️ 🚶 🚶‍♂️ 👩‍🦯 🧑‍🦯 👨‍🦯 🏃‍♀️ 🏃 🏃‍♂️ 👩‍🦼 🧑‍🦼 👨‍🦼 👩‍🦽 🧑‍🦽 👨‍🦽 💃 🕺 👫 👭 👬 🧑‍🤝‍🧑 👩‍❤️‍👨 👩‍❤️‍👩 💑 👨‍❤️‍👨 👩‍❤️‍💋‍👨 👩‍❤️‍💋‍👩 💏 👨‍❤️‍💋‍👨 ❤ 🧡 💛 💚 💙 💜 🤎 🖤 🤍 💔 ❣ 💕 💞 💓 💗 💖 💘 💝 ❤️‍🔥 ❤️‍🩹 💟"\033[m"
read $a
startTime=$(date +%s);
./client_src/client $p1 "😀 😃 😄 😁 😆 😅 😂 🤣 😇 😉 😊 🙂 🙃 ☺ 😋 😌 😍 🥰 😘 😗 😙 😚 🥲 🤪 😜 😝 😛 🤑 😎 🤓 🥸 🧐 🤠 🥳 🤗 🤡 😏 😶 😐 😑 😒 🙄 🤨 🤔 🤫 🤭 🤥 😳 😞 😟 😠 😡 🤬 😔 😕 🙁 ☹ 😬 🥺 😣 😖 😫 😩 🥱 😤 😮‍💨 😮 😱 😨 😰 😯 😦 😧 😢 😥 😪 🤤 😓 😭 🤩 😵 😵‍💫 🥴 😲 🤯 🤐 😷 🤕 🤒 🤮 🤢 🤧 🥵 🥶 😶‍🌫️ 😴 💤 😈 👿 👹 👺 💩 👻 💀 ☠ 👽 🤖 🎃 😺 😸 😹 😻 😼 😽 🙀 😿 😾 👐 🤲 🙌 👏 🙏 🤝 👍 👎 👊 ✊ 🤛 🤜 🤞 ✌ 🤘 🤟 👌 🤌 🤏 👈 👉 👆 👇 ☝ ✋ 🤚 🖐 🖖 👋 🤙 💪 🦾 🖕 ✍ 🤳 💅 🦵 🦿 🦶 👄 🦷 👅 👂 🦻 👃 👁 👀 🧠 🫀 🫁 🦴 👤 👥 🗣 🫂 👶 👧 🧒 👦 👩 🧑 👨 👩‍🦱 🧑‍🦱 👨‍🦱 👩‍🦰 🧑‍🦰 👨‍🦰 👱‍♀️ 👱 👱‍♂️ 👩‍🦳 🧑‍🦳 👨‍🦳 👩‍🦲 🧑‍🦲 👨‍🦲 🧔‍♀️ 🧔 🧔‍♂️ 👵 🧓 👴 👲 👳‍♀️ 👳 👳‍♂️ 🧕 👼 👸 🤴 👰 👰‍♀️ 👰‍♂️ 🤵‍♀️ 🤵 🤵‍♂️ 🙇‍♀️ 🙇 🙇‍♂️ 💁‍♀️ 💁 💁‍♂️ 🙅‍♀️ 🙅 🙅‍♂️ 🙆‍♀️ 🙆 🙆‍♂️ 🤷‍♀️ 🤷 🤷‍♂️ 🙋‍♀️ 🙋 🙋‍♂️ 🤦‍♀️ 🤦 🤦‍♂️ 🧏‍♀️ 🧏 🧏‍♂️ 🙎‍♀️ 🙎 🙎‍♂️ 🙍‍♀️ 🙍 🙍‍♂️ 💇‍♀️ 💇 💇‍♂️ 💆‍♀️ 💆 💆‍♂️ 🤰 🤱 👩‍🍼 🧑‍🍼 👨‍🍼 🧎‍♀️ 🧎 🧎‍♂️ 🧍‍♀️ 🧍 🧍‍♂️ 🚶‍♀️ 🚶 🚶‍♂️ 👩‍🦯 🧑‍🦯 👨‍🦯 🏃‍♀️ 🏃 🏃‍♂️ 👩‍🦼 🧑‍🦼 👨‍🦼 👩‍🦽 🧑‍🦽 👨‍🦽 💃 🕺 👫 👭 👬 🧑‍🤝‍🧑 👩‍❤️‍👨 👩‍❤️‍👩 💑 👨‍❤️‍👨 👩‍❤️‍💋‍👨 👩‍❤️‍💋‍👩 💏 👨‍❤️‍💋‍👨 ❤ 🧡 💛 💚 💙 💜 🤎 🖤 🤍 💔 ❣ 💕 💞 💓 💗 💖 💘 💝 ❤️‍🔥 ❤️‍🩹 💟"
endTime=$(date +%s);
totalTime=$(($endTime-$startTime));
echo -e "Execution time : ${RED}$totalTime ${NC}sec";
read $a


clear
echo -e "\n\033\033[32;1m" server pid : ...$p1"\033[m"
echo -e "\n"
echo -e "\n\033\033[32;1m" SigJam - Case Test... "\033[m"

echo -e "\n\033\033[32;1m"🐶 🐱 🐭 🐹 🐰 🐻 🧸 🐼 🐻‍❄️ 🐨 🐯 🦁 🐮 🐷 🐽 🐸 🐵 🙈 🙉 🙊 🐒 🦍 🦧 🐔 🐧 🐦 🐤 🐣 🐥 🐺 🦊 🦝 🐗 🐴 🦓 🦒 🦌 🦘 🦥 🦦 🦫 🦄 🐝 🐛 🦋 🐌 🪲 🐞 🐜 🦗 🪳 🕷 🕸 🦂 🦟 🪰 🪱 🦠 🐢 🐍 🦎 🐙 🦑 🦞 🦀 🦐 🦪 🐠 🐟 🐡 🐬 🦈 🦭 🐳 🐋 🐊 🐆 🐅 🐃 🐂 🐄 🦬 🐪 🐫 🦙 🐘 🦏 🦛 🦣 🐐 🐏 🐑 🐎 🐖 🦇 🐓 🦃 🕊 🦅 🦆 🦢 🦉 🦩 🦚 🦜 🦤 🪶 🐕 🦮 🐕‍🦺 🐩 🐈 🐈‍⬛ 🐇 🐀 🐁 🐿 🦨 🦡 🦔 🐾 🐉 🐲 🦕 🦖 🌵 🎄 🌲 🌳 🌴 🪴 🌱 🌿 ☘ 🍀 🎍 🎋 🍃 🍂 🍁 🌾 🌺 🌻 🌹 🥀 🌷 🌼 🌸 💐 🍄 🌰 🐚 🌎 🌍 🌏 🌕 🌖 🌗 🌘 🌑 🌒 🌓 🌔 🌙 🌚 🌝 🌛 🌜 ⭐ 🌟 💫 ✨ ☄ 🪐 🌞 ☀ 🌤 ⛅ 🌥 🌦 ☁ 🌧 ⛈ 🌩 ⚡ 🔥 💥 ❄ 🌨 ☃ ⛄ 🌬 💨 🌪 🌫 🌈 ☔ 💧 💦 🌊🐶 🐱 🐭 🐹 🐰 🐻 🧸 🐼 🐻‍❄️ 🐨 🐯 🦁 🐮 🐷 🐽 🐸 🐵 🙈 🙉 🙊 🐒 🦍 🦧 🐔 🐧 🐦 🐤 🐣 🐥 🐺 🦊 🦝 🐗 🐴 🦓 🦒 🦌 🦘 🦥 🦦 🦫 🦄 🐝 🐛 🦋 🐌 🪲 🐞 🐜 🦗 🪳 🕷 🕸 🦂 🦟 🪰 🪱 🦠 🐢 🐍 🦎 🐙 🦑 🦞 🦀 🦐 🦪 🐠 🐟 🐡 🐬 🦈 🦭 🐳 🐋 🐊 🐆 🐅 🐃 🐂 🐄 🦬 🐪 🐫 🦙 🐘 🦏 🦛 🦣 🐐 🐏 🐑 🐎 🐖 🦇 🐓 🦃 🕊 🦅 🦆 🦢 🦉 🦩 🦚 🦜 🦤 🪶 🐕 🦮 🐕‍🦺 🐩 🐈 🐈‍⬛ 🐇 🐀 🐁 🐿 🦨 🦡 🦔 🐾 🐉 🐲 🦕 🦖 🌵 🎄 🌲 🌳 🌴 🪴 🌱 🌿 ☘ 🍀 🎍 🎋 🍃 🍂 🍁 🌾 🌺 🌻 🌹 🥀 🌷 🌼 🌸 💐 🍄 🌰 🐚 🌎 🌍 🌏 🌕 🌖 🌗 🌘 🌑 🌒 🌓 🌔 🌙 🌚 🌝 🌛 🌜 ⭐ 🌟 💫 ✨ ☄ 🪐 🌞 ☀ 🌤 ⛅ 🌥 🌦 ☁ 🌧 ⛈ 🌩 ⚡ 🔥 💥 ❄ 🌨 ☃ ⛄ 🌬 💨 🌪 🌫 🌈 ☔ 💧 💦 🌊🐶 🐱 🐭 🐹 🐰 🐻 🧸 🐼 🐻‍❄️ 🐨 🐯 🦁 🐮 🐷 🐽 🐸 🐵 🙈 🙉 🙊 🐒 🦍 🦧 🐔 🐧 🐦 🐤 🐣 🐥 🐺 🦊 🦝 🐗 🐴 🦓 🦒 🦌 🦘 🦥 🦦 🦫 🦄 🐝 🐛 🦋 🐌 🪲 🐞 🐜 🦗 🪳 🕷 🕸 🦂 🦟 🪰 🪱 🦠 🐢 🐍 🦎 🐙 🦑 🦞 🦀 🦐 🦪 🐠 🐟 🐡 🐬 🦈 🦭 🐳 🐋 🐊 🐆 🐅 🐃 🐂 🐄 🦬 🐪 🐫 🦙 🐘 🦏 🦛 🦣 🐐 🐏 🐑 🐎 🐖 🦇 🐓 🦃 🕊 🦅 🦆 🦢 🦉 🦩 🦚 🦜 🦤 🪶 🐕 🦮 🐕‍🦺 🐩 🐈 🐈‍⬛ 🐇 🐀 🐁 🐿 🦨 🦡 🦔 🐾 🐉 🐲 🦕 🦖 🌵 🎄 🌲 🌳 🌴 🪴 🌱 🌿 ☘ 🍀 🎍 🎋 🍃 🍂 🍁 🌾 🌺 🌻 🌹 🥀 🌷 🌼 🌸 💐 🍄 🌰 🐚 🌎 🌍 🌏 🌕 🌖 🌗 🌘 🌑 🌒 🌓 🌔 🌙 🌚 🌝 🌛 🌜 ⭐ 🌟 💫 ✨ ☄ 🪐 🌞 ☀ 🌤 ⛅ 🌥 🌦 ☁ 🌧 ⛈ 🌩 ⚡ 🔥 💥 ❄ 🌨 ☃ ⛄ 🌬 💨 🌪 🌫 🌈 ☔ 💧 💦 🌊"\033[m"
read $a
startTime=$(date +%s);
./client_src/client $p1 "🐶 🐱 🐭 🐹 🐰 🐻 🧸 🐼 🐻‍❄️ 🐨 🐯 🦁 🐮 🐷 🐽 🐸 🐵 🙈 🙉 🙊 🐒 🦍 🦧 🐔 🐧 🐦 🐤 🐣 🐥 🐺 🦊 🦝 🐗 🐴 🦓 🦒 🦌 🦘 🦥 🦦 🦫 🦄 🐝 🐛 🦋 🐌 🪲 🐞 🐜 🦗 🪳 🕷 🕸 🦂 🦟 🪰 🪱 🦠 🐢 🐍 🦎 🐙 🦑 🦞 🦀 🦐 🦪 🐠 🐟 🐡 🐬 🦈 🦭 🐳 🐋 🐊 🐆 🐅 🐃 🐂 🐄 🦬 🐪 🐫 🦙 🐘 🦏 🦛 🦣 🐐 🐏 🐑 🐎 🐖 🦇 🐓 🦃 🕊 🦅 🦆 🦢 🦉 🦩 🦚 🦜 🦤 🪶 🐕 🦮 🐕‍🦺 🐩 🐈 🐈‍⬛ 🐇 🐀 🐁 🐿 🦨 🦡 🦔 🐾 🐉 🐲 🦕 🦖 🌵 🎄 🌲 🌳 🌴 🪴 🌱 🌿 ☘ 🍀 🎍 🎋 🍃 🍂 🍁 🌾 🌺 🌻 🌹 🥀 🌷 🌼 🌸 💐 🍄 🌰 🐚 🌎 🌍 🌏 🌕 🌖 🌗 🌘 🌑 🌒 🌓 🌔 🌙 🌚 🌝 🌛 🌜 ⭐ 🌟 💫 ✨ ☄ 🪐 🌞 ☀ 🌤 ⛅ 🌥 🌦 ☁ 🌧 ⛈ 🌩 ⚡ 🔥 💥 ❄ 🌨 ☃ ⛄ 🌬 💨 🌪 🌫 🌈 ☔ 💧 💦 🌊🐶 🐱 🐭 🐹 🐰 🐻 🧸 🐼 🐻‍❄️ 🐨 🐯 🦁 🐮 🐷 🐽 🐸 🐵 🙈 🙉 🙊 🐒 🦍 🦧 🐔 🐧 🐦 🐤 🐣 🐥 🐺 🦊 🦝 🐗 🐴 🦓 🦒 🦌 🦘 🦥 🦦 🦫 🦄 🐝 🐛 🦋 🐌 🪲 🐞 🐜 🦗 🪳 🕷 🕸 🦂 🦟 🪰 🪱 🦠 🐢 🐍 🦎 🐙 🦑 🦞 🦀 🦐 🦪 🐠 🐟 🐡 🐬 🦈 🦭 🐳 🐋 🐊 🐆 🐅 🐃 🐂 🐄 🦬 🐪 🐫 🦙 🐘 🦏 🦛 🦣 🐐 🐏 🐑 🐎 🐖 🦇 🐓 🦃 🕊 🦅 🦆 🦢 🦉 🦩 🦚 🦜 🦤 🪶 🐕 🦮 🐕‍🦺 🐩 🐈 🐈‍⬛ 🐇 🐀 🐁 🐿 🦨 🦡 🦔 🐾 🐉 🐲 🦕 🦖 🌵 🎄 🌲 🌳 🌴 🪴 🌱 🌿 ☘ 🍀 🎍 🎋 🍃 🍂 🍁 🌾 🌺 🌻 🌹 🥀 🌷 🌼 🌸 💐 🍄 🌰 🐚 🌎 🌍 🌏 🌕 🌖 🌗 🌘 🌑 🌒 🌓 🌔 🌙 🌚 🌝 🌛 🌜 ⭐ 🌟 💫 ✨ ☄ 🪐 🌞 ☀ 🌤 ⛅ 🌥 🌦 ☁ 🌧 ⛈ 🌩 ⚡ 🔥 💥 ❄ 🌨 ☃ ⛄ 🌬 💨 🌪 🌫 🌈 ☔ 💧 💦 🌊🐶 🐱 🐭 🐹 🐰 🐻 🧸 🐼 🐻‍❄️ 🐨 🐯 🦁 🐮 🐷 🐽 🐸 🐵 🙈 🙉 🙊 🐒 🦍 🦧 🐔 🐧 🐦 🐤 🐣 🐥 🐺 🦊 🦝 🐗 🐴 🦓 🦒 🦌 🦘 🦥 🦦 🦫 🦄 🐝 🐛 🦋 🐌 🪲 🐞 🐜 🦗 🪳 🕷 🕸 🦂 🦟 🪰 🪱 🦠 🐢 🐍 🦎 🐙 🦑 🦞 🦀 🦐 🦪 🐠 🐟 🐡 🐬 🦈 🦭 🐳 🐋 🐊 🐆 🐅 🐃 🐂 🐄 🦬 🐪 🐫 🦙 🐘 🦏 🦛 🦣 🐐 🐏 🐑 🐎 🐖 🦇 🐓 🦃 🕊 🦅 🦆 🦢 🦉 🦩 🦚 🦜 🦤 🪶 🐕 🦮 🐕‍🦺 🐩 🐈 🐈‍⬛ 🐇 🐀 🐁 🐿 🦨 🦡 🦔 🐾 🐉 🐲 🦕 🦖 🌵 🎄 🌲 🌳 🌴 🪴 🌱 🌿 ☘ 🍀 🎍 🎋 🍃 🍂 🍁 🌾 🌺 🌻 🌹 🥀 🌷 🌼 🌸 💐 🍄 🌰 🐚 🌎 🌍 🌏 🌕 🌖 🌗 🌘 🌑 🌒 🌓 🌔 🌙 🌚 🌝 🌛 🌜 ⭐ 🌟 💫 ✨ ☄ 🪐 🌞 ☀ 🌤 ⛅ 🌥 🌦 ☁ 🌧 ⛈ 🌩 ⚡ 🔥 💥 ❄ 🌨 ☃ ⛄ 🌬 💨 🌪 🌫 🌈 ☔ 💧 💦 🌊"
endTime=$(date +%s);
totalTime=$(($endTime-$startTime));
echo -e "Execution time : ${RED}$totalTime ${NC}sec";
read $a



clear
echo -e "\n\033\033[32;1m" server pid : ...$p1"\033[m"
echo -e "\n"
echo -e "\n\033\033[32;1m" 9000 over - Test... "\033[m"
echo -e "\n\033\033[32;1m"arstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoit"\033[m"
read $a
startTime=$(date +%s);
./client_src/client $p1 "arstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoitarstenarstoarstarsientarstaoirstarstarsetnarstoiarstarstarsentarstarsoaroietarsntarstoiarstarstnaorstnarsoit"
endTime=$(date +%s);
totalTime=$(($endTime-$startTime));
echo -e "Execution time : ${RED}$totalTime ${NC}sec";
read $a





clear
echo -e "\n\033\033[32;1m" test done!! "\033[m"
echo -e "\n"
echo -e "\n\033\033[32;1m" FIN "\033[m"
echo -e "\n"
echo -e "\n\033\033[32;1m" kill $p1 "\033[m"
read $a

kill $p1
