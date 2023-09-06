modded class MissionServer
{
	override bool InsertCorpse(Man player)
	{
		auto corpse_data = new CorpseData( PlayerBase.Cast( player ), GetGame().GetTime() );

		corpse_data.m_iMaxLifetime = GetCEApi().GetCEGlobalInt( "CleanupLifetimeDeadPlayer" );

		Print( "MissionServer::InsertCorpse set m_iMaxLifetime to " + corpse_data.m_iMaxLifetime + "." );

		return m_DeadPlayersArray.Insert( corpse_data ) >= 0;
	}
}
