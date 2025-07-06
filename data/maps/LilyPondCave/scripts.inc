LilyPondCave_MapScripts::
# 2 "data//maps/LilyPondCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilyPondCave_OnTransition
	.byte 0


LilyPondCave_OnTransition::
# 6 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_COMPLETE, LilyPondCave_OnTransition_2
# 8 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_SETUP, LilyPondCave_OnTransition_4
	return

LilyPondCave_OnTransition_2:
	end

LilyPondCave_OnTransition_4:
# 9 "data//maps/LilyPondCave/scripts.pory"
	setobjectxyperm 8, 13, 29
# 10 "data//maps/LilyPondCave/scripts.pory"
	setobjectxyperm 9, 12, 29
	end


LilyPondCave_SaveGame_Trigger::
# 16 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_COMPLETE, LilyPondCave_SaveGame_Trigger_2
# 18 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_SETUP, LilyPondCave_SaveGame_Trigger_4
	return

LilyPondCave_SaveGame_Trigger_2:
	end

LilyPondCave_SaveGame_Trigger_4:
# 19 "data//maps/LilyPondCave/scripts.pory"
	setvar VAR_TEMP_E, 1
# 20 "data//maps/LilyPondCave/scripts.pory"
	call Common_EventScript_SaveGameBeforeBattle
# 21 "data//maps/LilyPondCave/scripts.pory"
	releaseall
	end


LilyPondCave_Martha_Battle_Trigger0::
# 27 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_COMPLETE, LilyPondCave_Martha_Battle_Trigger0_2
# 29 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_SETUP, LilyPondCave_Martha_Battle_Trigger0_4
	return

LilyPondCave_Martha_Battle_Trigger0_2:
	end

LilyPondCave_Martha_Battle_Trigger0_4:
# 30 "data//maps/LilyPondCave/scripts.pory"
	special SpawnCameraObject
# 31 "data//maps/LilyPondCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilyPondCave_Martha_Battle_Trigger0_Movement_0
# 32 "data//maps/LilyPondCave/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LilyPondCave_Martha_Battle_Trigger0_Movement_1
# 33 "data//maps/LilyPondCave/scripts.pory"
	waitmovement 0
# 34 "data//maps/LilyPondCave/scripts.pory"
	special RemoveCameraObject
# 36 "data//maps/LilyPondCave/scripts.pory"
	goto LilyPondCave_Martha_Battle
	return


LilyPondCave_Martha_Battle_Trigger1::
# 40 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_COMPLETE, LilyPondCave_Martha_Battle_Trigger1_2
# 42 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_SETUP, LilyPondCave_Martha_Battle_Trigger1_4
	return

LilyPondCave_Martha_Battle_Trigger1_2:
	end

LilyPondCave_Martha_Battle_Trigger1_4:
# 43 "data//maps/LilyPondCave/scripts.pory"
	special SpawnCameraObject
# 44 "data//maps/LilyPondCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilyPondCave_Martha_Battle_Trigger1_Movement_0
# 45 "data//maps/LilyPondCave/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LilyPondCave_Martha_Battle_Trigger0_Movement_1
# 46 "data//maps/LilyPondCave/scripts.pory"
	waitmovement 0
# 47 "data//maps/LilyPondCave/scripts.pory"
	special RemoveCameraObject
# 49 "data//maps/LilyPondCave/scripts.pory"
	goto LilyPondCave_Martha_Battle
	return


LilyPondCave_Martha_Battle_Trigger2::
# 54 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_COMPLETE, LilyPondCave_Martha_Battle_Trigger2_2
# 56 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_SETUP, LilyPondCave_Martha_Battle_Trigger2_4
	return

LilyPondCave_Martha_Battle_Trigger2_2:
	end

LilyPondCave_Martha_Battle_Trigger2_4:
# 57 "data//maps/LilyPondCave/scripts.pory"
	special SpawnCameraObject
# 58 "data//maps/LilyPondCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilyPondCave_Martha_Battle_Trigger2_Movement_0
# 59 "data//maps/LilyPondCave/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LilyPondCave_Martha_Battle_Trigger0_Movement_1
# 60 "data//maps/LilyPondCave/scripts.pory"
	waitmovement 0
# 61 "data//maps/LilyPondCave/scripts.pory"
	special RemoveCameraObject
# 63 "data//maps/LilyPondCave/scripts.pory"
	goto LilyPondCave_Martha_Battle
	return


LilyPondCave_Martha_Battle::
# 68 "data//maps/LilyPondCave/scripts.pory"
	msgbox_delay LilyPondCave_Martha_Battle_Text_0, LilyPondCave_Martha_Battle_Text_1
# 70 "data//maps/LilyPondCave/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_MARTHA, LilyPondCave_Martha_Battle_Text_1
# 72 "data//maps/LilyPondCave/scripts.pory"
	msgbox_delay LilyPondCave_Martha_Battle_Text_0, LilyPondCave_Martha_Battle_Text_1
# 74 "data//maps/LilyPondCave/scripts.pory"
	applymovement 8, LilyPondCave_Martha_Battle_Movement_0
# 75 "data//maps/LilyPondCave/scripts.pory"
	applymovement 9, LilyPondCave_Martha_Battle_Movement_1
# 76 "data//maps/LilyPondCave/scripts.pory"
	waitmovement 0
# 78 "data//maps/LilyPondCave/scripts.pory"
	removeobject 8
# 79 "data//maps/LilyPondCave/scripts.pory"
	removeobject 9
# 81 "data//maps/LilyPondCave/scripts.pory"
	playse SE_EXIT
# 82 "data//maps/LilyPondCave/scripts.pory"
	waitse
# 84 "data//maps/LilyPondCave/scripts.pory"
	setflag FLAG_CHAMPION_MARTHA_COMPLETE
# 86 "data//maps/LilyPondCave/scripts.pory"
	releaseall
	end


# 31 "data//maps/LilyPondCave/scripts.pory"
LilyPondCave_Martha_Battle_Trigger0_Movement_0:
# 31 "data//maps/LilyPondCave/scripts.pory"
	walk_up
# 31 "data//maps/LilyPondCave/scripts.pory"
	walk_right
# 31 "data//maps/LilyPondCave/scripts.pory"
	face_up
	step_end

# 32 "data//maps/LilyPondCave/scripts.pory"
LilyPondCave_Martha_Battle_Trigger0_Movement_1:
# 32 "data//maps/LilyPondCave/scripts.pory"
	walk_up
# 32 "data//maps/LilyPondCave/scripts.pory"
	walk_up
	step_end

# 44 "data//maps/LilyPondCave/scripts.pory"
LilyPondCave_Martha_Battle_Trigger1_Movement_0:
# 44 "data//maps/LilyPondCave/scripts.pory"
	walk_up
	step_end

# 58 "data//maps/LilyPondCave/scripts.pory"
LilyPondCave_Martha_Battle_Trigger2_Movement_0:
# 58 "data//maps/LilyPondCave/scripts.pory"
	walk_up
# 58 "data//maps/LilyPondCave/scripts.pory"
	walk_left
# 58 "data//maps/LilyPondCave/scripts.pory"
	face_up
	step_end

# 74 "data//maps/LilyPondCave/scripts.pory"
LilyPondCave_Martha_Battle_Movement_0:
# 74 "data//maps/LilyPondCave/scripts.pory"
	walk_right
# 74 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 74 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 74 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 74 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 74 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 74 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 74 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 74 "data//maps/LilyPondCave/scripts.pory"
	walk_left
# 74 "data//maps/LilyPondCave/scripts.pory"
	walk_down
	step_end

# 75 "data//maps/LilyPondCave/scripts.pory"
LilyPondCave_Martha_Battle_Movement_1:
# 75 "data//maps/LilyPondCave/scripts.pory"
	walk_right
# 75 "data//maps/LilyPondCave/scripts.pory"
	walk_right
# 75 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 75 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 75 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 75 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 75 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 75 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 75 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 75 "data//maps/LilyPondCave/scripts.pory"
	walk_left
# 75 "data//maps/LilyPondCave/scripts.pory"
	walk_down
	step_end

LilyPondCave_Martha_Battle_Text_0:
# 68 "data//maps/LilyPondCave/scripts.pory"
	.string "Martha$"

LilyPondCave_Martha_Battle_Text_1:
# 68 "data//maps/LilyPondCave/scripts.pory"
	.string "$"
