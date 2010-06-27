/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2005
*
*****************************************************************************/
/*============================================================================
*
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/shlguid.h,v 1.1 2007/05/17 07:25:34 bw Exp $
*
* $Id: shlguid.h,v 1.1 2007/05/17 07:25:34 bw Exp $
*
* $Date: 2007/05/17 07:25:34 $
*
* $Name: 1.1 $
*
* $Locker$
*
* $Revision: 1.1 $
*
* $State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* $Log: shlguid.h,v $
* Revision 1.1  2007/05/17 07:25:34  bw
* UNI@bw_20070517 15:10:01 MTK U25 U26 06B V30 version
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/
/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2007
*
*****************************************************************************/
/*============================================================================
*
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/shlguid.h,v 1.1 2007/05/14 09:46:49 bw Exp $
*
* ~Id: shlguid.h,v 1.1 2007/05/14 09:46:49 bw Exp $
*
* ~Date: 2007/05/14 09:46:49 $
*
* ~Name: 1.1 $
*
* ~Locker$
*
* ~Revision: 1.1 $
*
* ~State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* ~Log: shlguid.h,v $
* Revision 1.1  2007/05/14 09:46:49  bw
* UNI@bw_20070514 17:21:01 MTK��ʼ�汾.�ϲ�U25V20��U26V28.
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/
/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2005
*
*****************************************************************************/
/*============================================================================
*
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/shlguid.h,v 1.2 2007/04/04 06:51:34 bw Exp $
*
* ~Id: shlguid.h,v 1.2 2007/04/04 06:51:34 bw Exp $
*
* ~Date: 2007/04/04 06:51:34 $
*
* ~Name: 1.2 $
*
* ~Locker$
*
* ~Revision: 1.2 $
*
* ~State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* ~Log: shlguid.h,v $
* Revision 1.2  2007/04/04 06:51:34  bw
* ����.c.h�ļ�ͷģ��
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

#ifndef _SHLGUID_H
#define _SHLGUID_H
#if __GNUC__ >= 3
#pragma GCC system_header
#endif

#ifdef __cplusplus
extern "C" {
#endif
#define DEFINE_SHLGUID(n,l,w1,w2) DEFINE_GUID(n,l,w1,w2,0xC0,0,0,0,0,0,0,0x46)
#define SID_SShellBrowser IID_IShellBrowser
extern const GUID CLSID_ShellDesktop;
extern const GUID CLSID_ShellLink;
extern const GUID FMTID_Intshcut;
extern const GUID FMTID_InternetSite;
extern const GUID CGID_Explorer;
extern const GUID CGID_ShellDocView;
extern const GUID CGID_ShellServiceObject;
extern const GUID IID_INewShortcutHookA;
extern const GUID IID_IShellBrowser;
extern const GUID IID_IShellView;
extern const GUID IID_IContextMenu;
extern const GUID IID_IShellIcon;
extern const GUID IID_IShellFolder;
extern const GUID IID_IShellExtInit;
extern const GUID IID_IShellPropSheetExt;
extern const GUID IID_IPersistFolder;
extern const GUID IID_IExtractIconA;
extern const GUID IID_IShellLinkA;
extern const GUID IID_IShellCopyHookA;
extern const GUID IID_IFileViewerA;
extern const GUID IID_ICommDlgBrowser;
extern const GUID IID_IEnumIDList;
extern const GUID IID_IFileViewerSite;
extern const GUID IID_IContextMenu2;
extern const GUID IID_IShellExecuteHookA;
extern const GUID IID_IPropSheetPage;
extern const GUID IID_INewShortcutHookW;
extern const GUID IID_IFileViewerW;
extern const GUID IID_IShellLinkW;
extern const GUID IID_IExtractIconW;
extern const GUID IID_IShellExecuteHookW;
extern const GUID IID_IShellCopyHookW;
extern const GUID IID_IShellView2;
extern const GUID LIBID_SHDocVw;
extern const GUID IID_IShellExplorer;
extern const GUID DIID_DShellExplorerEvents;
extern const GUID CLSID_ShellExplorer;
extern const GUID IID_ISHItemOC;
extern const GUID DIID_DSHItemOCEvents;
extern const GUID CLSID_SHItemOC;
extern const GUID IID_DHyperLink;
extern const GUID IID_DIExplorer;
extern const GUID DIID_DExplorerEvents;
extern const GUID CLSID_InternetExplorer;
extern const GUID CLSID_StdHyperLink;
extern const GUID CLSID_FileTypes;
extern const GUID CLSID_InternetShortcut;
extern const GUID IID_IUniformResourceLocator;
extern const GUID CLSID_DragDropHelper;
extern const GUID IID_IDropTargetHelper;
extern const GUID IID_IDragSourceHelper;
#ifdef UNICODE
#define IID_IFileViewer	IID_IFileViewerW
#define IID_IShellLink	IID_IShellLinkW
#define IID_IExtractIcon	IID_IExtractIconW
#define IID_IShellCopyHook	IID_IShellCopyHookW
#define IID_IShellExecuteHook	IID_IShellExecuteHookW
#define IID_INewShortcutHook	IID_INewShortcutHookW
#else
#define IID_IFileViewer	IID_IFileViewerA
#define IID_IShellLink	IID_IShellLinkA
#define IID_IExtractIcon	IID_IExtractIconA
#define IID_IShellCopyHook	IID_IShellCopyHookA
#define IID_IShellExecuteHook	IID_IShellExecuteHookA
#define IID_INewShortcutHook	IID_INewShortcutHookA
#endif

#ifdef __cplusplus
}
#endif

#endif