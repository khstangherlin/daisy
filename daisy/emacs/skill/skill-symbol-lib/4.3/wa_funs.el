(put 'wa_funs 'symbol-type "waveform display fun")
(setq wa_funs '(
("waAddByName" "w_windowId t_filename t_signalNames")
("waAttach" "w_windowId t_filename")
("waDetach" "w_windowId t_filename")
("waDouble" "w_windowId t_direction x_newCenterX x_newCenterY")
("waFull" "w_windowId t_direction x_stripIdx")
("waGetAddedWaves" "w_windowId")
("waGetAnchor" "w_windowId")
("waGetAutoColor" "")
("waGetAutoProbe" "")
("waGetColor" "w_windowId t_filename t_signalName")
("waGetCursor" "w_windowId")
("waGetDefaultDiv" "")
("waGetDefaultFile" "")
("waGetDefaultGrid" "")
("waGetDefaultRadix" "")
("waGetDefaultScale" "")
("waGetDispXRange" "w_windowId")
("waGetDispYRange" "w_windowId x_stripIdx")
("waGetDivision" "w_windowId x_stripIdx")
("waGetFilenameList" "w_window")
("waGetFixedHeight" "")
("waGetGravityRange" "")
("waGetGrid" "w_windowId x_stripIdx")
("waGetHasMap" "")
("waGetHasMaster" "")
("waGetLeftIsMSB" "")
("waGetMonitor" "w_windowId")
("waGetNumOfStrips" "w_windowId")
("waGetPlotType" "w_windowId")
("waGetRadix" "w_windowId x_stripIdx")
("waGetRunDir" "w_windowId")
("waGetScale" "w_windowId x_stripIdx")
("waGetShiftFactor" "")
("waGetSilentRead" "")
("waGetStripIdx" "w_windowId x_pointX x_pointY")
("waGetStripsLinked" "")
("waGetSweepMax" "w_windowId")
("waGetSweepMin" "w_windowId")
("waGetTopStrip" "w_windowId")
("waGetUseLogicTable" "")
("waGetVisibleStrips" "w_windowId")
("waHalf" "w_windowId t_direction x_newCenterX x_newCenterY")
("waInfo" "w_windowId")
("waLinear" "w_windowId t_axis x_stripIdx")
("waListAll" "w_windowId")
("waLog" "w_windowId t_axis x_stripIdx")
("waMove" "w_windowId x_fromStripIdx x_toStripIdx")
("waOpenWaveform" "[?libName t_library] [?win w_windowId] [?location l_locBox] [?drawType "text"]")
("waPan" "w_windowId t_direction x_newCenterX x_newCenterY")
("waPlotRedraw" "w_windowId")
("waRedraw" "w_windowId")
("waRemoveAll" "w_windowId")
("waRemoveByName" "w_windowId t_filename t_signalNames")
("waRemoveStrip" "w_windowId x_stripIdx")
("waRestoreFile" "w_windowId t_filename")
("waSaveFile" "w_windowId t_filename")
("waSetAnchor" "w_windowId x_pointX x_pointY")
("waSetAutoColor" "t_YesOrNo")
("waSetAutoProbe" "t_YesOrNo")
("waSetColor" "w_windowId t_filename t_signalName t_colorLayer")
("waSetCursor" "w_windowId t_OnOrOff")
("waSetDefaultDiv" "x_divX x_divY x_subDivX x_subDivY")
("waSetDefaultFile" "t_filename")
("waSetDefaultGrid" "t_OnOff")
("waSetDefaultRadix" "t_radix")
("waSetDefaultScale" "f_minX f_maxX f_minY f_maxY t_logX t_logY f_logBaseX f_logBaseY")
("waSetDispXRange" "w_windowId f_xMin f_xMax")
("waSetDispYRange" "w_windowId x_stripIdx f_yMin f_yMax")
("waSetDivision" "w_windowId x_divX x_divY x_subDivX x_subDivY x_stripIdx")
("waSetFixedHeight" "t_YesOrNo")
("waSetGravityRange" "x_gravity")
("waSetGrid" "w_windowId t_OnOff x_stripIdx")
("waSetHasMap" "t_YesOrNo")
("waSetHasMaster" "t_YesOrNo")
("waSetLeftIsMSB" "w_window t_YesOrNo")
("waSetMonitor" "w_windowId t_OnOff")
("waSetPlotType" "w_windowId t_compOrStrip")
("waSetRadix" "w_windowId t_radix x_stripIdx")
("waSetScale" "w_windowId f_minX f_maxX f_minY f_maxY t_logX t_logY f_logBaseX f_logBaseY x_stripIdx")
("waSetShiftFactor" "f_factor")
("waSetSilentRead" "t_YesOrNo")
("waSetStripsLinked" "t_YesOrNo")
("waSetTopStrip" "w_windowId x_stripIdx")
("waSetUseLogicTable" "t_YesOrNo")
("waSetVisibleStrips" "w_windowId x_numOfStrips")
("waSwap" "w_windowId x_fromStripIdx x_toStripIdx")
("waZoomIn" "w_windowId t_direction x_point1x x_point1y x_point2x x_point2y")
))
