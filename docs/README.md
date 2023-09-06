# Decay
Decay is a fix for DayZ's [incorrect human corpse deletion behavior](https://feedback.bistudio.com/T145488).
The project overrides the `MissionServer::AddCorpse` method and sets `CorpseData::m_iMaxLifetime` to the value of `CleanupLifetimeDeadPlayer` as defined in the global.xml file.

### Installing
Subscribe to the mod on the [Steam Workshop](https://steamcommunity.com/sharedfiles/filedetails/?id=3031822299).

### Usage
You are allowed to add this mod to Steam Workshop collections.
You are not allowed to repack this mod.
