(put 'fm_funs 'symbol-type "frameMaker interface fun")
(setq fm_funs '(
("fmAddBoxProp" "t_boxName t_propName g_propValue [ t_propName g_propValue ...]" "Sets default properties for a given text rectangle.")
("fmAddTabStop" "t_boxName t_tabType g_tabPosition [t_leader [t_decimal]]" "Defines tab stops on a text rectangle.")
("fmApply" "" "Creates the template defined by the report generation calls that followed the fmCreateTemplate procedure call.")
("fmApply" "" "Creates a report defined by the report generation calls following the fmCreateReport procedure call.")
("fmCheckAndRestartFrameEditor" "[t_callBackProc][t_callBackArg]" "Checks if a Frame editor is currently running and, if not, starts the default Frame editor.")
("fmCheckFrameRPC" "" "Checks if a Frame editor can respond to a remote procedure call request.")
("fmCheckFrameVars" "g_startframe [t_callBackProc] [t_callBackArg]" "Initializes the Design Framework II-FrameMaker environment by setting the default Frame editor, the default Frame path, and the Frame options.")
("fmConnectFlow" "t_box1Name t_box2Name" "Connects the text flow from one text rectangle to another.")
("fmCreateReport" "t_templateName t_reportName" "Initializes the environment for FrameMaker report creation.")
("fmCreateTemplate" "t_name" "Initializes the environment for FrameMaker template creation.")
("fmDrawBox" "t_boxName t_box x_pageNumber" "Draws a text rectangle.")
("fmLinkDoc" "t_docName t_hypertextTagName" "Displays the FrameMaker document page containing the given hypertext tag.")
("fmOpenDoc" "t_docName" "Displays the first page of a FrameMaker document.")
("fmPlaceFile" "t_boxName t_fileName" "Places the contents of an ASCII file into a text rectangle.")
("fmPlaceHP" "t_boxName t_fileName x_scale" "Places the HP-GL (Hewlett-Packard Graphics Language) image from a file into a text rectangle.")
("fmPlaceImage" "t_boxName t_fileName" "Places the graphical image from a file into a text rectangle. The image can be in any of the formats recognized by FrameMaker: Rasterfile format, PostScript, Encapsulated PostScript, or XWD format.")
("fmPlaceMIF" "t_boxName t_fileName" "Places the Maker Interchange Format (MIF) commands from a file into a text rectangle.")
("fmPlaceText" "t_boxName t_text" "Places a text string in a text rectangle.")
("fmRemoveBoxName" "t_boxName" "Removes a text rectangle tag.")
("fmSetPropDefault" "t_propName g_propValue [t_propName g_propValue ...]" "Sets default properties for all text rectangles created by subsequent fmDrawBox calls.")
("fmStartFrame" "t_product [t_file] [t_callBackProc] t_callBackArg]" "Starts a Frame editor.")
))