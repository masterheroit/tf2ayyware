#pragma once
#include "SDK.h"
#include <chrono>
#include <sstream>

class CChatSpam
{
public:

	std::chrono::time_point<std::chrono::system_clock> last_spam_point{};

	int current_index{ 0 };

	std::string repeat(int n, const char* str)
	{
		std::ostringstream os;
		for (int i = 0; i < n; i++)
			os << str;
		return os.str();
	}

	void Run(CBaseEntity * pLocal, CUserCmd * pCommand);

};

namespace ChatSpams
{
	const std::vector<std::string> builtin_nonecore = {
		"NULL CORE - REDUCE YOUR RISK OF BEING OWNED!",
		"NULL CORE - WAY TO THE TOP!",
		"NULL CORE - BEST TF2 CHEAT!",
		"NULL CORE - NOW WITH BLACKJACK AND HOOKERS!",
		"NULL CORE - BUTTHURT IN 10 SECONDS FLAT!",
		"NULL CORE - WHOLE SERVER OBSERVING!",
		"NULL CORE - GET BACK TO PWNING!",
		"NULL CORE - WHEN PVP IS TOO HARDCORE!",
		"NULL CORE - CAN CAUSE KIDS TO RAGE!",
		"NULL CORE - F2P NOOBS WILL BE 100% NERFED!"
	};
	const std::vector<std::string> builtin_lmaobox = {
		"GET GOOD, GET LMAOBOX!",
		"LMAOBOX - WAY TO THE TOP",
		"WWW.LMAOBOX.NET - BEST FREE TF2 HACK!"
	};
	const std::vector<std::string> builtin_lithium = {
		"CHECK OUT www.YouTube.com/c/DurRud FOR MORE INFORMATION!",
		"PWNING AIMBOTS WITH OP ANTI-AIMS SINCE 2015 - LITHIUMCHEAT",
		"STOP GETTING MAD AND STABILIZE YOUR MOOD WITH LITHIUMCHEAT!",
		"SAVE YOUR MONEY AND GET LITHIUMCHEAT! IT IS FREE!",
		"GOT ROLLED BY LITHIUM? HEY, THAT MEANS IT'S TIME TO GET LITHIUMCHEAT!!"
	};
	const std::vector<std::string> builtin_cathook = {
		"cathook - more fun than a ball of yarn!",
		"GNU/Linux is the best OS!",
		"visit youtube.com/c/nullifiedcat for more information!",
		"cathook - free tf2 cheat!",
		"cathook - ca(n)t stop me meow!"
	};
	const std::vector < std::string> builtin_empty = {
		"\x0D\x0D\x0D\x0D\x0D\x0D\x0D\x0D\x0D\x0D\x0D\x0D\x0D\x0D\x0D\x0D\x0D"
	};
	const std::vector<std::string> builtin_speedhook = {
		"GET GOOD, GET SPEEDHOOK",
		"SPEEDHOOK - THE CHEAT OF CHAMPIONS",
		"DISCORD.IO/SPEEDHOOK - GET SPEEDHOOK TODAY"
	};
	const std::vector<std::string> builtin_freelbox = {
		"GET GOOD, GET LMAOBoX!",
		"WWW.LMAOBoX.NET - BEST FREE TF2 HACK!"
	};
	const std::vector<std::string> builtin_catbot = {
		"cat-bots by nullifiedcat - free and open source at nullifiedcat's github!",
		"Any questions? Contact nullifiedcat on Discord: discord.gg/sXM3AU7",
		"Want to not get killed? Put ''cat-bot'' in your name!",
		"I am a bot and this action was performed automatically.",
		"Contact me on Discord: discord.gg/sXM3AU7",
		"Cat-bots - made by nullifiedcat! They are free!",
		"As seen on /r/tf2!",
		"Do you like cat-bots? Join my Discord server: discord.gg/sXM3AU7",
		"Rename yourself to ''cat-bot'' and bots will not shoot you!",
		"Bots are completely automated.Automated gaming - gamers of the future.",
		"Bots taunt after killing you with 16 percent chance. If it taunts, you are a total loser lmao.",
		"Proof that cat-bots are actual bots: www.youtube.com/watch?v=9BLfpYEniow",
		"Angry ? Peeved ? Perturbed ? discord.gg / sXM3AU7",
		"As seen on TF2 discussion forums!",
		"cat - bots will ignore you if you put ''cat-bot'' in your name!(unless you abuse that)"
	};
	const std::vector<std::string> builtin_dumpsterfire = {
		"sup paster ;-)",
		"credits to me , me , me and someone",
		"when paste fakeware is better than actual aimware",
		"gayware paste",
		"rerererereleased by B0ruK 2stronk.",
		"uknowncheats > all",
		"https://steamcommunity.com/id/B0ruK"
	};
}

extern CChatSpam gChatSpam;

