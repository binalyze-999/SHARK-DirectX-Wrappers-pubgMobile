#include "Discord.h"
#include <time.h>
#include <chrono>
#include "chrono"

//Discord* g_Discord;

static int64_t eptime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();

void Discord::Initialize()
{
    DiscordEventHandlers Handle;
    memset(&Handle, 0, sizeof(Handle));
    Discord_Initialize("933787646357032991", &Handle, 1, NULL);
}

void Discord::Update()
{
    int botcount;
    int playercount;
    DiscordRichPresence discordPresence;
    memset(&discordPresence, 0, sizeof(discordPresence));
    if (Data::AActorList.size() != 0)

    {
        botcount = 0;
        playercount = 0;

        for (int i = 0; i < Data::AActorList.size(); i++)
        {
            if (Data::AActorList[i].Name == " BOT ")
            {
                botcount = botcount + 1;
            }
            else
            {
                playercount = playercount + 1;
            }
        }
        std::string Enr = "Total : " + to_string(Data::AActorList.size()) + " | ""Player : " + (std::to_string(playercount)) + " | ""Bot : " + (std::to_string(botcount));

        discordPresence.details = Enr.c_str();

    }
    else
    {
        discordPresence.details = "No Enemy Near You";
    }
    //discordPresence.details = "Playing With Xander Cheats";
    if (Emulator::LatestGameLoop = true)
    {
        discordPresence.state = "Playing On GameLoop";
    }

    else if (Emulator::IsSmartGaGa4 = true)
    {
        discordPresence.state = "Playing On SmartGaga";
    }
    else if (Emulator::IsGameLoop4 = true)
    {
        discordPresence.state = "Playing On GameLoop 4.4";
    }
    else if (Emulator::IsGameLoop7 = true)
    {
        discordPresence.state = "Playing On GameLoop 7.1";
    }

    else if (Emulator::IsGameLoop = true) {
        discordPresence.state = "Playing On GameLoop ";

    }



    discordPresence.startTimestamp = eptime;
    discordPresence.largeImageKey = "night_mare_logo_by_slax";
    discordPresence.largeImageText = "Shark Hack Safe In Main Acc";
    discordPresence.smallImageKey = "verified";
    discordPresence.smallImageText = "Link- https://discord.gg/45ZPkyVMxx";
    Discord_UpdatePresence(&discordPresence);
}
