typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef void *HANDLE;

typedef HANDLE HTHEME;

typedef struct DLGTEMPLATE DLGTEMPLATE, *PDLGTEMPLATE;

typedef struct DLGTEMPLATE *LPCDLGTEMPLATEA;

typedef ulong DWORD;

typedef ushort WORD;

struct DLGTEMPLATE {
    DWORD style;
    DWORD dwExtendedStyle;
    WORD cdit;
    short x;
    short y;
    short cx;
    short cy;
};

typedef struct tagMOUSEINPUT tagMOUSEINPUT, *PtagMOUSEINPUT;

typedef struct tagMOUSEINPUT MOUSEINPUT;

typedef long LONG;

typedef ulong ULONG_PTR;

struct tagMOUSEINPUT {
    LONG dx;
    LONG dy;
    DWORD mouseData;
    DWORD dwFlags;
    DWORD time;
    ULONG_PTR dwExtraInfo;
};

typedef struct tagINPUT tagINPUT, *PtagINPUT;

typedef union _union_859 _union_859, *P_union_859;

typedef struct tagKEYBDINPUT tagKEYBDINPUT, *PtagKEYBDINPUT;

typedef struct tagKEYBDINPUT KEYBDINPUT;

typedef struct tagHARDWAREINPUT tagHARDWAREINPUT, *PtagHARDWAREINPUT;

typedef struct tagHARDWAREINPUT HARDWAREINPUT;

struct tagKEYBDINPUT {
    WORD wVk;
    WORD wScan;
    DWORD dwFlags;
    DWORD time;
    ULONG_PTR dwExtraInfo;
};

struct tagHARDWAREINPUT {
    DWORD uMsg;
    WORD wParamL;
    WORD wParamH;
};

union _union_859 {
    MOUSEINPUT mi;
    KEYBDINPUT ki;
    HARDWAREINPUT hi;
};

struct tagINPUT {
    DWORD type;
    union _union_859 field1_0x4;
};

typedef struct tagTPMPARAMS tagTPMPARAMS, *PtagTPMPARAMS;

typedef struct tagTPMPARAMS TPMPARAMS;

typedef uint UINT;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

struct tagTPMPARAMS {
    UINT cbSize;
    RECT rcExclude;
};

typedef struct tagMENUITEMINFOW tagMENUITEMINFOW, *PtagMENUITEMINFOW;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ *HMENU;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

typedef struct HBITMAP__ *HBITMAP;

typedef wchar_t WCHAR;

typedef WCHAR *LPWSTR;

struct HMENU__ {
    int unused;
};

struct HBITMAP__ {
    int unused;
};

struct tagMENUITEMINFOW {
    UINT cbSize;
    UINT fMask;
    UINT fType;
    UINT fState;
    UINT wID;
    HMENU hSubMenu;
    HBITMAP hbmpChecked;
    HBITMAP hbmpUnchecked;
    ULONG_PTR dwItemData;
    LPWSTR dwTypeData;
    UINT cch;
    HBITMAP hbmpItem;
};

typedef struct tagWNDCLASSEXW tagWNDCLASSEXW, *PtagWNDCLASSEXW;

typedef struct tagWNDCLASSEXW WNDCLASSEXW;

typedef long LONG_PTR;

typedef LONG_PTR LRESULT;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef LONG_PTR LPARAM;

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ *HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ *HBRUSH;

typedef WCHAR *LPCWSTR;

struct HBRUSH__ {
    int unused;
};

struct HICON__ {
    int unused;
};

struct HINSTANCE__ {
    int unused;
};

struct HWND__ {
    int unused;
};

struct tagWNDCLASSEXW {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCWSTR lpszMenuName;
    LPCWSTR lpszClassName;
    HICON hIconSm;
};

typedef struct tagMENUITEMINFOW MENUITEMINFOW;

typedef MENUITEMINFOW *LPCMENUITEMINFOW;

typedef struct tagPAINTSTRUCT tagPAINTSTRUCT, *PtagPAINTSTRUCT;

typedef struct tagPAINTSTRUCT *LPPAINTSTRUCT;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ *HDC;

typedef int BOOL;

typedef uchar BYTE;

struct HDC__ {
    int unused;
};

struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[32];
};

typedef struct tagINPUT *LPINPUT;

typedef struct tagPAINTSTRUCT PAINTSTRUCT;

typedef LPCDLGTEMPLATEA LPCDLGTEMPLATE;

typedef int INT_PTR;

typedef INT_PTR (*DLGPROC)(HWND, UINT, WPARAM, LPARAM);

typedef TPMPARAMS *LPTPMPARAMS;

typedef struct _TRIVERTEX _TRIVERTEX, *P_TRIVERTEX;

typedef ushort USHORT;

typedef USHORT COLOR16;

struct _TRIVERTEX {
    LONG x;
    LONG y;
    COLOR16 Red;
    COLOR16 Green;
    COLOR16 Blue;
    COLOR16 Alpha;
};

typedef struct tagTEXTMETRICW tagTEXTMETRICW, *PtagTEXTMETRICW;

struct tagTEXTMETRICW {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    WCHAR tmFirstChar;
    WCHAR tmLastChar;
    WCHAR tmDefaultChar;
    WCHAR tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
};

typedef struct tagLOGFONTW tagLOGFONTW, *PtagLOGFONTW;

typedef struct tagLOGFONTW LOGFONTW;

struct tagLOGFONTW {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    WCHAR lfFaceName[32];
};

typedef struct tagTEXTMETRICW TEXTMETRICW;

typedef int (*OLDFONTENUMPROCW)(LOGFONTW *, TEXTMETRICW *, DWORD, LPARAM);

typedef OLDFONTENUMPROCW FONTENUMPROCW;

typedef struct tagLOGFONTW *LPLOGFONTW;

typedef struct tagTEXTMETRICW *LPTEXTMETRICW;

typedef struct _TRIVERTEX *PTRIVERTEX;

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef long HRESULT;

typedef char CHAR;

typedef CHAR *LPCSTR;

typedef void *PVOID;

typedef DWORD ACCESS_MASK;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef ULONG_PTR *PDWORD_PTR;

typedef ULONG_PTR SIZE_T;

typedef LPCDLGTEMPLATE PROPSHEETPAGE_RESOURCE;

typedef struct _PROPSHEETHEADERW_V2 _PROPSHEETHEADERW_V2, *P_PROPSHEETHEADERW_V2;

typedef struct _PROPSHEETHEADERW_V2 PROPSHEETHEADERW_V2;

typedef PROPSHEETHEADERW_V2 *LPCPROPSHEETHEADERW_V2;

typedef union _union_1964 _union_1964, *P_union_1964;

typedef union _union_1965 _union_1965, *P_union_1965;

typedef union _union_1966 _union_1966, *P_union_1966;

typedef int (*PFNPROPSHEETCALLBACK)(HWND, UINT, LPARAM);

typedef union _union_1967 _union_1967, *P_union_1967;

typedef struct HPALETTE__ HPALETTE__, *PHPALETTE__;

typedef struct HPALETTE__ *HPALETTE;

typedef union _union_1968 _union_1968, *P_union_1968;

typedef struct _PROPSHEETPAGEW _PROPSHEETPAGEW, *P_PROPSHEETPAGEW;

typedef struct _PROPSHEETPAGEW PROPSHEETPAGEW_V4;

typedef PROPSHEETPAGEW_V4 *LPCPROPSHEETPAGEW_V4;

typedef LPCPROPSHEETPAGEW_V4 LPCPROPSHEETPAGEW;

typedef struct _PSP _PSP, *P_PSP;

typedef struct _PSP *HPROPSHEETPAGE;

typedef union _union_1946 _union_1946, *P_union_1946;

typedef union _union_1947 _union_1947, *P_union_1947;

typedef UINT (*LPFNPSPCALLBACKW)(HWND, UINT, struct _PROPSHEETPAGEW *);

typedef union _union_1948 _union_1948, *P_union_1948;

struct _PSP {
};

union _union_1948 {
    HBITMAP hbmHeader;
    LPCWSTR pszbmHeader;
};

union _union_1946 {
    LPCWSTR pszTemplate;
    PROPSHEETPAGE_RESOURCE pResource;
};

union _union_1947 {
    HICON hIcon;
    LPCWSTR pszIcon;
};

struct _PROPSHEETPAGEW {
    DWORD dwSize;
    DWORD dwFlags;
    HINSTANCE hInstance;
    union _union_1946 u;
    union _union_1947 u2;
    LPCWSTR pszTitle;
    DLGPROC pfnDlgProc;
    LPARAM lParam;
    LPFNPSPCALLBACKW pfnCallback;
    UINT *pcRefParent;
    LPCWSTR pszHeaderTitle;
    LPCWSTR pszHeaderSubTitle;
    HANDLE hActCtx;
    union _union_1948 u3;
};

union _union_1967 {
    HBITMAP hbmWatermark;
    LPCWSTR pszbmWatermark;
};

union _union_1968 {
    HBITMAP hbmHeader;
    LPCWSTR pszbmHeader;
};

struct HPALETTE__ {
    int unused;
};

union _union_1964 {
    HICON hIcon;
    LPCWSTR pszIcon;
};

union _union_1965 {
    UINT nStartPage;
    LPCWSTR pStartPage;
};

union _union_1966 {
    LPCPROPSHEETPAGEW ppsp;
    HPROPSHEETPAGE *phpage;
};

struct _PROPSHEETHEADERW_V2 {
    DWORD dwSize;
    DWORD dwFlags;
    HWND hwndParent;
    HINSTANCE hInstance;
    union _union_1964 u;
    LPCWSTR pszCaption;
    UINT nPages;
    union _union_1965 u2;
    union _union_1966 u3;
    PFNPROPSHEETCALLBACK pfnCallback;
    union _union_1967 u4;
    HPALETTE hplWatermark;
    union _union_1968 u5;
};

typedef LPCPROPSHEETHEADERW_V2 LPCPROPSHEETHEADERW;

typedef struct tagINITCOMMONCONTROLSEX tagINITCOMMONCONTROLSEX, *PtagINITCOMMONCONTROLSEX;

typedef struct tagINITCOMMONCONTROLSEX INITCOMMONCONTROLSEX;

struct tagINITCOMMONCONTROLSEX {
    DWORD dwSize;
    DWORD dwICC;
};

typedef ulong ULONG;

typedef struct HFONT__ HFONT__, *PHFONT__;

typedef struct HFONT__ *HFONT;

struct HFONT__ {
    int unused;
};

typedef struct tagPOINT tagPOINT, *PtagPOINT;

struct tagPOINT {
    LONG x;
    LONG y;
};

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef DWORD *LPDWORD;

typedef RECT *LPCRECT;

typedef DWORD COLORREF;

typedef struct tagSIZE tagSIZE, *PtagSIZE;

struct tagSIZE {
    LONG cx;
    LONG cy;
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *PFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef struct HRSRC__ HRSRC__, *PHRSRC__;

struct HRSRC__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef int INT;

typedef HANDLE HLOCAL;

typedef struct tagSIZE *LPSIZE;

typedef BYTE *LPBYTE;

typedef int (*FARPROC)(void);

typedef struct HKEY__ *HKEY;

typedef HKEY *PHKEY;

typedef WORD ATOM;

typedef struct tagRECT *LPRECT;

typedef HANDLE HGLOBAL;

typedef void *HGDIOBJ;

typedef void *LPCVOID;

typedef struct HRSRC__ *HRSRC;

typedef struct tagPOINT POINT;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset;
    dword NameIsString;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef LONG LSTATUS;

typedef ACCESS_MASK REGSAM;

typedef char *va_list;

typedef UINT_PTR (*LPCCHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct tagCHOOSECOLORW tagCHOOSECOLORW, *PtagCHOOSECOLORW;

struct tagCHOOSECOLORW {
    DWORD lStructSize;
    HWND hwndOwner;
    HWND hInstance;
    COLORREF rgbResult;
    COLORREF *lpCustColors;
    DWORD Flags;
    LPARAM lCustData;
    LPCCHOOKPROC lpfnHook;
    LPCWSTR lpTemplateName;
};

typedef struct tagCHOOSECOLORW *LPCHOOSECOLORW;

typedef enum RESTRICTIONS {
    REST_NONE=0,
    REST_NORUN=1,
    REST_NOCLOSE=2,
    REST_NOSAVESET=4,
    REST_NOFILEMENU=8,
    REST_NOSETFOLDERS=16,
    REST_NOSETTASKBAR=32,
    REST_NODESKTOP=64,
    REST_NOFIND=128,
    REST_NODRIVES=256,
    REST_NODRIVEAUTORUN=512,
    REST_NODRIVETYPEAUTORUN=1024,
    REST_NONETHOOD=2048,
    REST_STARTBANNER=4096,
    REST_RESTRICTRUN=8192,
    REST_NOPRINTERTABS=16384,
    REST_NOPRINTERDELETE=32768,
    REST_NOPRINTERADD=65536,
    REST_NOSTARTMENUSUBFOLDERS=131072,
    REST_MYDOCSONNET=262144,
    REST_NOEXITTODOS=524288,
    REST_ENFORCESHELLEXTSECURITY=1048576,
    REST_LINKRESOLVEIGNORELINKINFO=2097152,
    REST_NOCOMMONGROUPS=4194304,
    REST_SEPARATEDESKTOPPROCESS=8388608,
    REST_NOWEB=16777216,
    REST_NOTRAYCONTEXTMENU=33554432,
    REST_NOVIEWCONTEXTMENU=67108864,
    REST_NONETCONNECTDISCONNECT=134217728,
    REST_STARTMENULOGOFF=268435456,
    REST_NOSETTINGSASSIST=536870912,
    REST_NOINTERNETICON=1073741825,
    REST_NORECENTDOCSHISTORY=1073741826,
    REST_NORECENTDOCSMENU=1073741827,
    REST_NOACTIVEDESKTOP=1073741828,
    REST_NOACTIVEDESKTOPCHANGES=1073741829,
    REST_NOFAVORITESMENU=1073741830,
    REST_CLEARRECENTDOCSONEXIT=1073741831,
    REST_CLASSICSHELL=1073741832,
    REST_NOCUSTOMIZEWEBVIEW=1073741833,
    REST_NOHTMLWALLPAPER=1073741840,
    REST_NOCHANGINGWALLPAPER=1073741841,
    REST_NODESKCOMP=1073741842,
    REST_NOADDDESKCOMP=1073741843,
    REST_NODELDESKCOMP=1073741844,
    REST_NOCLOSEDESKCOMP=1073741845,
    REST_NOCLOSE_DRAGDROPBAND=1073741846,
    REST_NOMOVINGBAND=1073741847,
    REST_NOEDITDESKCOMP=1073741848,
    REST_NORESOLVESEARCH=1073741849,
    REST_NORESOLVETRACK=1073741850,
    REST_FORCECOPYACLWITHFILE=1073741851,
    REST_NOLOGO3CHANNELNOTIFY=1073741852,
    REST_NOFORGETSOFTWAREUPDATE=1073741853,
    REST_NOSETACTIVEDESKTOP=1073741854,
    REST_NOUPDATEWINDOWS=1073741855,
    REST_NOCHANGESTARMENU=1073741856,
    REST_NOFOLDEROPTIONS=1073741857,
    REST_HASFINDCOMPUTERS=1073741858,
    REST_INTELLIMENUS=1073741859,
    REST_RUNDLGMEMCHECKBOX=1073741860,
    REST_ARP_ShowPostSetup=1073741861,
    REST_NOCSC=1073741862,
    REST_NOCONTROLPANEL=1073741863,
    REST_ENUMWORKGROUP=1073741864,
    REST_ARP_NOARP=1073741865,
    REST_ARP_NOREMOVEPAGE=1073741866,
    REST_ARP_NOADDPAGE=1073741867,
    REST_ARP_NOWINSETUPPAGE=1073741868,
    REST_GREYMSIADS=1073741869,
    REST_NOCHANGEMAPPEDDRIVELABEL=1073741870,
    REST_NOCHANGEMAPPEDDRIVECOMMENT=1073741871,
    REST_MaxRecentDocs=1073741872,
    REST_NONETWORKCONNECTIONS=1073741873,
    REST_FORCESTARTMENULOGOFF=1073741874,
    REST_NOWEBVIEW=1073741875,
    REST_NOCUSTOMIZETHISFOLDER=1073741876,
    REST_NOENCRYPTION=1073741877,
    REST_DONTSHOWSUPERHIDDEN=1073741879,
    REST_NOSHELLSEARCHBUTTON=1073741880,
    REST_NOHARDWARETAB=1073741881,
    REST_NORUNASINSTALLPROMPT=1073741882,
    REST_PROMPTRUNASINSTALLNETPATH=1073741883,
    REST_NOMANAGEMYCOMPUTERVERB=1073741884,
    REST_DISALLOWRUN=1073741886,
    REST_NOWELCOMESCREEN=1073741887,
    REST_RESTRICTCPL=1073741888,
    REST_DISALLOWCPL=1073741889,
    REST_NOSMBALLOONTIP=1073741890,
    REST_NOSMHELP=1073741891,
    REST_NOWINKEYS=1073741892,
    REST_NOENCRYPTONMOVE=1073741893,
    REST_NOLOCALMACHINERUN=1073741894,
    REST_NOCURRENTUSERRUN=1073741895,
    REST_NOLOCALMACHINERUNONCE=1073741896,
    REST_NOCURRENTUSERRUNONCE=1073741897,
    REST_FORCEACTIVEDESKTOPON=1073741898,
    REST_NOVIEWONDRIVE=1073741900,
    REST_NOSMMYDOCS=1073741903,
    REST_ALLOWLEGACYWEBVIEW=1073741955,
    REST_ARP_DONTGROUPPATCHES=1073741996,
    REST_ARP_NOCHOOSEPROGRAMSPAGE=1073741997,
    REST_NODISCONNECT=1090519041,
    REST_NOSECURITY=1090519042,
    REST_NOFILEASSOCIATE=1090519043
} RESTRICTIONS;




void __cdecl FUN_00401000(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if ((param_3 & 3) == 0) {
    uVar1 = param_3 >> 2;
    if (uVar1 != 0) {
      puVar2 = param_1;
      do {
        *puVar2 = *(undefined4 *)((param_2 - (int)param_1) + (int)puVar2);
        uVar1 = uVar1 - 1;
        puVar2 = puVar2 + 1;
      } while (uVar1 != 0);
      return;
    }
  }
  else if (param_3 != 0) {
    puVar2 = param_1;
    do {
      *(undefined1 *)puVar2 = *(undefined1 *)((param_2 - (int)param_1) + (int)puVar2);
      param_3 = param_3 - 1;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    } while (param_3 != 0);
  }
  return;
}



int * __cdecl FUN_00401060(int *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = param_1;
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *piVar2 = (uint)param_2 * 0x1010101;
      piVar2 = piVar2 + 1;
    }
    for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(char *)piVar2 = (char)((uint)param_2 * 0x1010101);
      piVar2 = (int *)((int)piVar2 + 1);
    }
  }
  return param_1;
}



uint __cdecl FUN_00401090(LPCWSTR param_1)

{
  HANDLE pvVar1;
  int iVar2;
  LPWSTR lpString1;
  LPWSTR pWVar3;
  
  if (param_1 != (LPCWSTR)0x0) {
    pvVar1 = GetProcessHeap();
    if (pvVar1 != (HANDLE)0x0) {
      iVar2 = lstrlenW(param_1);
      lpString1 = (LPWSTR)HeapAlloc(hHeap_004114a8,0,(iVar2 + 1) * 2);
      if (lpString1 != (LPWSTR)0x0) {
        pWVar3 = lstrcpyW(lpString1,param_1);
        return -(uint)(pWVar3 != (LPWSTR)0x0) & (uint)lpString1;
      }
    }
  }
  return 0;
}



int __cdecl FUN_004010e0(ushort *param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  
  if (param_1 == (ushort *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    return 0;
  }
  uVar2 = *param_1;
  iVar3 = 0;
  if (uVar2 != 0) {
    while (0x2f < uVar2) {
      cVar1 = (char)uVar2;
      if (uVar2 < 0x3a) {
        cVar1 = cVar1 + -0x30;
      }
      else {
        if (uVar2 < 0x41) break;
        if (uVar2 < 0x47) {
          cVar1 = cVar1 + -0x37;
        }
        else {
          if ((uVar2 < 0x61) || (0x66 < uVar2)) break;
          cVar1 = cVar1 + -0x57;
        }
      }
      if (cVar1 < '\0') break;
      uVar2 = param_1[1];
      param_1 = param_1 + 1;
      iVar3 = iVar3 * 0x10 + (int)cVar1;
      if (uVar2 == 0) break;
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  return iVar3;
}



int __cdecl FUN_00401160(ushort *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  
  if (param_1 != (ushort *)0x0) {
    iVar2 = 0;
    uVar1 = *param_1;
    while (((uVar1 != 0 && (0x2f < uVar1)) && (uVar1 < 0x3a))) {
      param_1 = param_1 + 1;
      iVar2 = (uint)uVar1 + iVar2 * 10 + -0x30;
      uVar1 = *param_1;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return iVar2;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return 0;
}



uint __cdecl FUN_004011c0(HKEY param_1,LPCWSTR param_2,uint param_3)

{
  LSTATUS LVar1;
  int local_10;
  DWORD local_c [2];
  
  local_c[1] = 4;
  LVar1 = RegQueryValueExW(param_1,param_2,(LPDWORD)0x0,local_c,(LPBYTE)&local_10,local_c + 1);
  if ((LVar1 == 0) && (local_c[0] == 4)) {
    return (uint)(local_10 != 0);
  }
  return param_3;
}



LSTATUS __cdecl FUN_00401210(HKEY param_1,LPCWSTR param_2,LPBYTE param_3)

{
  LSTATUS LVar1;
  DWORD local_c [2];
  
  local_c[1] = 4;
  LVar1 = RegQueryValueExW(param_1,param_2,(LPDWORD)0x0,local_c,param_3,local_c + 1);
  if ((LVar1 == 0) && (local_c[0] != 4)) {
    LVar1 = 0x65e;
  }
  return LVar1;
}



LSTATUS __cdecl FUN_00401250(HKEY param_1,LPCWSTR param_2,LPBYTE param_3)

{
  LSTATUS LVar1;
  DWORD local_c [2];
  
  local_c[1] = 8;
  LVar1 = RegQueryValueExW(param_1,param_2,(LPDWORD)0x0,local_c,param_3,local_c + 1);
  if ((LVar1 == 0) && (local_c[0] != 0xb)) {
    LVar1 = 0x65e;
  }
  return LVar1;
}



LSTATUS __cdecl FUN_00401290(HKEY param_1,LPCWSTR param_2,LPCWSTR param_3,LPDWORD param_4)

{
  LSTATUS LVar1;
  LPWSTR lpString1;
  LPWSTR pWVar2;
  DWORD DVar3;
  uint dwBytes;
  DWORD local_8;
  
  dwBytes = *param_4 >> 1;
  LVar1 = RegQueryValueExW(param_1,param_2,(LPDWORD)0x0,&local_8,(LPBYTE)param_3,param_4);
  if (LVar1 != 0) {
    return LVar1;
  }
  if ((local_8 != 1) && (local_8 != 2)) {
    return 0x65e;
  }
  if (*param_4 < 2) {
    *param_3 = L'\0';
  }
  else {
    param_3[dwBytes - 1] = L'\0';
    if (local_8 == 2) {
      lpString1 = (LPWSTR)HeapAlloc(hHeap_004114a8,0,dwBytes);
      if (lpString1 != (LPWSTR)0x0) {
        pWVar2 = lstrcpyW(lpString1,param_3);
        if (pWVar2 == (LPWSTR)0x0) {
          HeapFree(hHeap_004114a8,0,lpString1);
        }
        else {
          DVar3 = ExpandEnvironmentStringsW(lpString1,param_3,dwBytes);
          if ((DVar3 != 0) && (DVar3 <= dwBytes)) {
            *param_4 = DVar3 * 2;
            return 0;
          }
        }
      }
      return 8;
    }
  }
  return 0;
}



int __cdecl FUN_00401350(undefined4 *param_1,HMODULE param_2,uint param_3)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  ushort *puVar1;
  LPWSTR lpBuffer;
  int iVar2;
  uint uVar3;
  
  if ((((param_2 != (HMODULE)0x0) &&
       (hResInfo = FindResourceW(param_2,(LPCWSTR)((param_3 >> 4) + 1 & 0xffff),(LPCWSTR)0x6),
       hResInfo != (HRSRC)0x0)) &&
      (hResData = LoadResource(param_2,hResInfo), hResData != (HGLOBAL)0x0)) &&
     (puVar1 = (ushort *)LockResource(hResData), puVar1 != (ushort *)0x0)) {
    for (uVar3 = param_3 & 0xf; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar1 = puVar1 + *puVar1 + 1;
    }
    iVar2 = *puVar1 + 1;
    if (*puVar1 != 0) {
      lpBuffer = (LPWSTR)HeapAlloc(hHeap_004114a8,0,iVar2 * 2);
      *param_1 = lpBuffer;
      if (lpBuffer != (LPWSTR)0x0) {
        iVar2 = LoadStringW(param_2,param_3,lpBuffer,iVar2);
        if (0 < iVar2) {
          return iVar2;
        }
        HeapFree(hHeap_004114a8,0,(LPVOID)*param_1);
      }
    }
  }
  *param_1 = 0;
  return 0;
}



HWND __cdecl FUN_00401400(HWND param_1,int param_2,uint param_3)

{
  HWND hWnd;
  int iVar1;
  undefined4 local_3c;
  undefined4 local_38;
  HWND local_34;
  HWND local_30;
  HINSTANCE local_1c;
  LPVOID local_18;
  undefined4 local_14;
  HWND local_c;
  LPVOID local_8;
  
  local_c = GetDlgItem(param_1,param_2);
  if ((local_c != (HWND)0x0) &&
     (hWnd = CreateWindowExW(0,L"tooltips_class32",(LPCWSTR)0x0,0x80000001,-0x80000000,-0x80000000,
                             -0x80000000,-0x80000000,param_1,(HMENU)0x0,hInstance_004114a0,
                             (LPVOID)0x0), hWnd != (HWND)0x0)) {
    if (((int)param_3 < 1) || (iVar1 = FUN_00401350(&local_8,hInstance_004114a0,param_3), iVar1 < 1)
       ) {
      local_8 = (LPVOID)0x0;
    }
    local_30 = local_c;
    local_1c = hInstance_004114a0;
    local_3c = 0x30;
    local_38 = 0x11;
    local_34 = param_1;
    local_14 = 0;
    local_18 = local_8;
    SendMessageW(hWnd,0x432,0,(LPARAM)&local_3c);
    HeapFree(hHeap_004114a8,0,local_8);
    return hWnd;
  }
  return (HWND)0x0;
}



LRESULT __cdecl FUN_004014e0(HWND param_1)

{
  WPARAM wParam;
  LRESULT LVar1;
  
  wParam = SendMessageW(param_1,0x147,0,0);
  if ((int)wParam < 0) {
    return 0;
  }
  LVar1 = SendMessageW(param_1,0x150,wParam,0);
  return LVar1;
}



uint FUN_00401510(HMODULE param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  LPCWSTR local_8;
  
  iVar1 = FUN_00401350(&local_8,param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_004015c0(local_8);
  HeapFree(hHeap_004114a8,0,local_8);
  return uVar2;
}



uint FUN_00401560(void)

{
  DWORD DVar1;
  uint uVar2;
  LPCWSTR local_8;
  
  DVar1 = GetLastError();
  if (DVar1 != 0) {
    DVar1 = FormatMessageW(0x1300,(LPCVOID)0x0,DVar1,0,(LPWSTR)&local_8,0,(va_list *)0x0);
    if (DVar1 != 0) {
      uVar2 = FUN_004015c0(local_8);
      LocalFree(local_8);
      return uVar2;
    }
    LocalFree(local_8);
  }
  return 0;
}



uint __cdecl FUN_004015c0(LPCWSTR param_1)

{
  BOOL BVar1;
  int iVar2;
  HANDLE hConsoleOutput;
  DWORD DVar3;
  uint uVar4;
  LPDWORD pDVar5;
  LPVOID pvVar6;
  tagINPUT local_40;
  undefined4 local_24;
  undefined2 local_20;
  undefined4 local_1c;
  LPCWSTR local_8;
  
  BVar1 = AttachConsole(0xffffffff);
  if (BVar1 != 0) {
    hConsoleOutput = GetStdHandle(0xfffffff5);
    if (hConsoleOutput == (HANDLE)0xffffffff) {
      FreeConsole();
      return 0;
    }
    pvVar6 = (LPVOID)0x0;
    pDVar5 = (LPDWORD)0x0;
    DVar3 = lstrlenA((LPCSTR)&lpString_0040e254);
    WriteConsoleW(hConsoleOutput,&lpBuffer_0040e258,DVar3,pDVar5,pvVar6);
    pvVar6 = (LPVOID)0x0;
    pDVar5 = (LPDWORD)0x0;
    DVar3 = lstrlenW(param_1);
    uVar4 = WriteConsoleW(hConsoleOutput,param_1,DVar3,pDVar5,pvVar6);
    FreeConsole();
    FUN_00401060((int *)&local_40,0,0x38);
    local_40.type = 1;
    local_24 = 1;
    local_40.field1_0x4.ki.wVk = 0xd;
    local_20 = 0xd;
    local_1c = 2;
    SendInput(2,&local_40,0x1c);
    return uVar4;
  }
  iVar2 = FUN_00401350(&local_8,hInstance_004114a0,100);
  if (0 < iVar2) {
    iVar2 = MessageBoxW((HWND)0x0,param_1,local_8,0);
    return (uint)(iVar2 != 0);
  }
  return 0;
}



undefined4 __cdecl FUN_004016b0(HWND param_1,int param_2)

{
  LRESULT LVar1;
  LRESULT LVar2;
  WPARAM wParam;
  
  LVar1 = SendMessageW(param_1,0x146,0,0);
  wParam = 0;
  if (0 < LVar1) {
    do {
      LVar2 = SendMessageW(param_1,0x150,wParam,0);
      if (LVar2 == param_2) {
        SendMessageW(param_1,0x14e,wParam,0);
        return 1;
      }
      wParam = wParam + 1;
    } while ((int)wParam < LVar1);
  }
  return 0;
}



void __cdecl FUN_00401710(HWND param_1)

{
  uint uVar1;
  
  uVar1 = SendMessageW(param_1,0x468,0,0);
  if (uVar1 >> 0x10 != 0) {
    SendMessageW(param_1,0x467,0,uVar1 & 0xffff);
  }
  return;
}



int __cdecl FUN_00401750(HMODULE param_1,HWND param_2,uint param_3,uint param_4,UINT param_5)

{
  int iVar1;
  LPCWSTR local_c;
  LPCWSTR local_8;
  
  iVar1 = FUN_00401350(&local_8,param_1,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_00401350(&local_c,param_1,param_4);
    if (iVar1 != 0) {
      iVar1 = MessageBoxW(param_2,local_8,local_c,param_5);
      HeapFree(hHeap_004114a8,0,local_8);
      HeapFree(hHeap_004114a8,0,local_c);
      return iVar1;
    }
    HeapFree(hHeap_004114a8,0,local_8);
  }
  return 0;
}



void FUN_004017e0(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = LoadLibraryW(L"shlwapi.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,(LPCSTR)0x180);
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
    }
  }
  return;
}



bool FUN_00401810(void)

{
  UINT UVar1;
  tagINPUT local_3c;
  undefined4 local_20;
  undefined2 local_1c;
  undefined4 local_18;
  
  FUN_00401060((int *)&local_3c,0,0x38);
  local_3c.type = 1;
  local_20 = 1;
  local_3c.field1_0x4.ki.wVk = 0xd;
  local_1c = 0xd;
  local_18 = 2;
  UVar1 = SendInput(2,&local_3c,0x1c);
  return UVar1 == 2;
}



void __cdecl FUN_00401870(LPCWSTR param_1)

{
  WCHAR *pWVar1;
  SIZE_T dwBytes;
  WCHAR WVar2;
  WCHAR WVar3;
  int iVar4;
  WCHAR *pWVar5;
  LPCWSTR pWVar6;
  WCHAR *pWVar7;
  WCHAR *lpString;
  
  for (lpString = param_1;
      (WVar3 = *lpString, WVar3 == L' ' ||
      (((WVar3 != L'\0' && ((ushort)WVar3 < 0x20)) || (WVar3 == L'\\')))); lpString = lpString + 1)
  {
  }
  iVar4 = lstrlenW(lpString);
  if (0 < iVar4) {
    for (pWVar6 = lpString + iVar4 + -1;
        ((WVar3 = *pWVar6, WVar3 == L' ' || ((WVar3 != L'\0' && ((ushort)WVar3 < 0x20)))) ||
        (WVar3 == L'\\')); pWVar6 = pWVar6 + -1) {
    }
    pWVar6[1] = L'\0';
  }
  iVar4 = lstrlenW(lpString);
  dwBytes = iVar4 * 2 + 2;
  pWVar5 = (WCHAR *)HeapAlloc(hHeap_004114a8,0,dwBytes);
  if (pWVar5 != (WCHAR *)0x0) {
    WVar3 = *lpString;
    pWVar7 = pWVar5;
    while (WVar3 != L'\0') {
      if ((((WVar3 != L' ') && ((WVar3 = *lpString, WVar3 == L'\0' || (0x1f < (ushort)WVar3)))) &&
          (WVar3 != L'\\')) ||
         ((WVar2 = lpString[1], WVar2 != L' ' &&
          (((WVar2 == L'\0' || (0x1f < (ushort)WVar2)) && (WVar2 != L'\\')))))) {
        if (((WVar3 == L'\0') || (0x1f < (ushort)WVar3)) && (WVar3 != L'\\')) {
          *pWVar7 = WVar3;
        }
        else {
          *pWVar7 = L' ';
        }
        pWVar7 = pWVar7 + 1;
      }
      pWVar1 = lpString + 1;
      lpString = lpString + 1;
      WVar3 = *pWVar1;
    }
    *pWVar7 = L'\0';
    FUN_00401000((undefined4 *)param_1,(int)pWVar5,dwBytes);
  }
  return;
}



uint __cdecl FUN_004019a0(ushort *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  
  uVar2 = param_3;
  puVar4 = param_1;
  uVar5 = 0;
  param_1 = (ushort *)0x0;
  if (param_3 != 0) {
    do {
      uVar3 = FUN_00401160(puVar4,&param_1);
      if (puVar4 == param_1) {
        return uVar5;
      }
      if (0xff < uVar3) {
        return uVar5;
      }
      *(char *)(param_2 + uVar5) = (char)uVar3;
      uVar5 = uVar5 + 1;
      uVar1 = *param_1;
      puVar4 = param_1;
      if ((uVar1 == 0) && (uVar5 < uVar2)) {
        return uVar5;
      }
      while (uVar1 == 0x20) {
        uVar1 = puVar4[1];
        puVar4 = puVar4 + 1;
      }
    } while (uVar5 < uVar2);
  }
  return uVar5;
}



undefined4 FUN_00401a10(HWND param_1,int param_2,HWND param_3,undefined4 param_4)

{
  undefined4 local_34;
  undefined4 local_30;
  HWND local_2c;
  HWND local_28;
  HINSTANCE local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_28 = GetDlgItem(param_1,param_2);
  if (local_28 == (HWND)0x0) {
    return 0;
  }
  local_14 = hInstance_004114a0;
  local_10 = param_4;
  local_34 = 0x30;
  local_30 = 0x11;
  local_2c = param_1;
  local_c = 0;
  SendMessageW(param_3,0x439,0,(LPARAM)&local_34);
  return 1;
}



uint FUN_00401a80(void)

{
  uint uVar1;
  DWORD DVar2;
  uint uVar3;
  uint uVar4;
  LSTATUS LVar5;
  PVOID *lpData;
  int iVar6;
  int iVar7;
  WCHAR aWStack_20 [2];
  byte local_1c [2];
  byte local_1a;
  DWORD local_14;
  DWORD local_10;
  HKEY local_c;
  HKEY local_8;
  
  uVar1 = 1;
  if (DAT_00411144 == 0) {
    uVar1 = 1;
    iVar7 = 0;
    do {
      DVar2 = GetSysColor(iVar7);
      if (DVar2 == 0xffffffff) {
        uVar1 = 0;
      }
      else {
        (&DAT_00411398)[iVar7] = DVar2;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x1f);
    local_10 = FUN_00402fa0(&DAT_00411148);
    local_10 = local_10 & uVar1;
    uVar1 = SystemParametersInfoW(0x1f,0x5c,&pvParam_0041133c,0);
    uVar3 = SystemParametersInfoW(0x1008,0,&pvParam_00411414,0);
    uVar4 = SystemParametersInfoW(0x1022,0,&pvParam_00411418,0);
    uVar1 = uVar4 & local_10 & uVar3 & uVar1 & 1;
  }
  DAT_00411144 = 1;
  if ((uVar1 != 0) &&
     (LVar5 = RegCreateKeyExW((HKEY)0x80000003,L".DEFAULT",0,(LPWSTR)0x0,0,2,
                              (LPSECURITY_ATTRIBUTES)0x0,&local_c,(LPDWORD)0x0), LVar5 == 0)) {
    local_8 = local_c;
    LVar5 = RegCreateKeyExW(local_c,L"Control Panel\\Desktop\\WindowMetrics",0,(LPWSTR)0x0,0,2,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_8,(LPDWORD)0x0);
    if (LVar5 == 0) {
      iVar7 = 0;
      uVar1 = 1;
      do {
        switch(iVar7) {
        default:
          lpData = (PVOID *)&DAT_00411160;
          break;
        case 1:
          lpData = (PVOID *)&DAT_004111c4;
          break;
        case 2:
          lpData = (PVOID *)&DAT_00411228;
          break;
        case 3:
          lpData = (PVOID *)&DAT_00411284;
          break;
        case 4:
          lpData = (PVOID *)&DAT_004112e0;
          break;
        case 5:
          lpData = &pvParam_0041133c;
        }
        LVar5 = RegSetValueExW(local_8,(LPCWSTR)(&PTR_u_CaptionFont_004110a0)[iVar7],0,3,
                               (BYTE *)lpData,0x5c);
        uVar3 = 0;
        if (LVar5 == 0) {
          uVar3 = uVar1;
        }
        iVar7 = iVar7 + 1;
        uVar1 = uVar3;
      } while (iVar7 < 6);
      iVar7 = 0;
      do {
        iVar6 = FUN_004025d0(0x411148,iVar7);
        iVar6 = wsprintfW(aWStack_20,(LPCWSTR)&param_2_0040ea20,iVar6 * -0xf);
        if (iVar6 < 1) {
          uVar3 = 0;
        }
        else {
          iVar6 = lstrlenW(aWStack_20);
          LVar5 = RegSetValueExW(local_8,(LPCWSTR)(&PTR_u_BorderWidth_0041107c)[iVar7],0,1,
                                 (BYTE *)aWStack_20,iVar6 * 2 + 2);
          uVar3 = uVar3 & LVar5 == 0;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 9);
      RegCloseKey(local_8);
    }
    else {
      uVar3 = 0;
    }
    uVar1 = FUN_00403e90(local_c,(ushort *)&DAT_00411398);
    LVar5 = RegOpenKeyExW(local_c,L"Control Panel\\Desktop",0,3,&local_8);
    if (LVar5 == 0) {
      local_10 = 8;
      LVar5 = RegQueryValueExW(local_8,L"UserPreferencesMask",(LPDWORD)0x0,&local_14,local_1c,
                               &local_10);
      if (((LVar5 == 0) && (local_14 == 3)) && (local_10 == 8)) {
        if (pvParam_00411414 == (PVOID)0x0) {
          local_1c[0] = local_1c[0] & 0xef;
        }
        else {
          local_1c[0] = local_1c[0] | 0x10;
        }
        if (pvParam_00411418 == (PVOID)0x0) {
          local_1a = local_1a & 0xfd;
        }
        else {
          local_1a = local_1a | 2;
        }
        RegSetValueExW(local_8,L"UserPreferencesMask",0,3,local_1c,8);
      }
      RegCloseKey(local_8);
    }
    RegCloseKey(local_c);
    return uVar1 & uVar3;
  }
  return 0;
}



void __cdecl FUN_00401d20(HKEY param_1,int *param_2)

{
  byte bVar1;
  HKEY pHVar2;
  int iVar3;
  LSTATUS LVar4;
  int *piVar5;
  PVOID *ppvVar6;
  COLORREF *pCVar7;
  HKEY pHVar8;
  HKEY pHVar9;
  uint uVar10;
  bool bVar11;
  wchar_t *lpValueName;
  WCHAR local_94 [6];
  INT local_88 [16];
  int aiStack_48 [16];
  int local_8;
  
  pHVar2 = param_1;
  piVar5 = &DAT_00411148;
  local_8 = 0;
  uVar10 = 0x1f0;
  pHVar8 = param_1;
  do {
    if (*piVar5 != pHVar8->unused) {
      SystemParametersInfoW(0x2a,500,param_1,3);
      local_8 = 1;
      break;
    }
    piVar5 = piVar5 + 1;
    pHVar8 = pHVar8 + 1;
    bVar11 = 3 < uVar10;
    uVar10 = uVar10 - 4;
  } while (bVar11);
  ppvVar6 = &pvParam_0041133c;
  uVar10 = 0x58;
  pHVar8 = pHVar2 + 0x7d;
  do {
    if (*ppvVar6 != (PVOID)pHVar8->unused) {
      SystemParametersInfoW(0x22,0x5c,pHVar2 + 0x7d,3);
      local_8 = 1;
      break;
    }
    ppvVar6 = ppvVar6 + 1;
    pHVar8 = pHVar8 + 1;
    bVar11 = 3 < uVar10;
    uVar10 = uVar10 - 4;
  } while (bVar11);
  pHVar8 = pHVar2 + 0x94;
  pCVar7 = &DAT_00411398;
  uVar10 = 0x78;
  pHVar9 = pHVar8;
  do {
    if (*pCVar7 != pHVar9->unused) {
      bVar1 = (byte)pHVar9->unused;
      bVar11 = (byte)*pCVar7 < bVar1;
      if (((((byte)*pCVar7 == bVar1) &&
           (bVar1 = *(byte *)((int)&pHVar9->unused + 1), bVar11 = *(byte *)((int)pCVar7 + 1) < bVar1
           , *(byte *)((int)pCVar7 + 1) == bVar1)) &&
          (bVar1 = *(byte *)((int)&pHVar9->unused + 2), bVar11 = *(byte *)((int)pCVar7 + 2) < bVar1,
          *(byte *)((int)pCVar7 + 2) == bVar1)) &&
         (bVar1 = *(byte *)((int)&pHVar9->unused + 3), bVar11 = *(byte *)((int)pCVar7 + 3) < bVar1,
         *(byte *)((int)pCVar7 + 3) == bVar1)) {
        uVar10 = 0;
      }
      else {
        uVar10 = -(uint)bVar11 | 1;
      }
      goto LAB_00401dfc;
    }
    pCVar7 = pCVar7 + 1;
    pHVar9 = pHVar9 + 1;
    bVar11 = 3 < uVar10;
    uVar10 = uVar10 - 4;
  } while (bVar11);
  uVar10 = 0;
LAB_00401dfc:
  iVar3 = local_8;
  if (uVar10 != 0) {
    iVar3 = 0x10;
    local_88[0] = 0;
    local_88[1] = 1;
    local_88[2] = 2;
    local_88[3] = 3;
    local_88[4] = 4;
    local_88[5] = 5;
    local_88[6] = 6;
    local_88[7] = 7;
    local_88[8] = 8;
    local_88[9] = 9;
    local_88[10] = 10;
    local_88[0xb] = 0xb;
    local_88[0xc] = 0xc;
    local_88[0xd] = 0xd;
    local_88[0xe] = 0xe;
    local_88[0xf] = 0xf;
    do {
      local_88[iVar3] = iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x1f);
    SetSysColors(0x1f,local_88,(COLORREF *)pHVar8);
    FUN_00403e90((HKEY)0x80000001,(ushort *)pHVar8);
    iVar3 = 1;
  }
  if ((PVOID)pHVar2[0xb3].unused != pvParam_00411414) {
    SystemParametersInfoW(0x1009,0,(PVOID)pHVar2[0xb3].unused,3);
    pvParam_00411414 = (PVOID)pHVar2[0xb3].unused;
    iVar3 = 1;
  }
  if ((PVOID)pHVar2[0xb4].unused == pvParam_00411418) {
    if (iVar3 == 0) goto LAB_00401f06;
  }
  else {
    SystemParametersInfoW(0x1023,0,(PVOID)pHVar2[0xb4].unused,3);
    pvParam_00411418 = (PVOID)pHVar2[0xb4].unused;
  }
  LVar4 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Appearance",0,2,&param_1);
  if (LVar4 == 0) {
    RegDeleteValueW(param_1,L"Current");
    RegCloseKey(param_1);
  }
LAB_00401f06:
  piVar5 = param_2;
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    LVar4 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Appearance\\ClassicSchemes",0,2,&param_1
                         );
    if (LVar4 != 0) {
      return;
    }
    lpValueName = L"SelectedScheme";
  }
  else {
    FUN_00403db0(*(LPCWSTR *)(*param_2 + 8));
    if (piVar5[1] != 0) {
      FUN_00403e10(*(undefined4 *)(*piVar5 + 8),*(LPCWSTR *)(piVar5[1] + 8));
      return;
    }
    iVar3 = wsprintfW(local_94,L"%s\\%s",L"Control Panel\\Appearance\\ClassicSchemes",
                      *(undefined4 *)(*piVar5 + 8));
    if (iVar3 < 0x29) {
      return;
    }
    LVar4 = RegOpenKeyExW((HKEY)0x80000001,local_94,0,2,&param_1);
    if (LVar4 != 0) {
      return;
    }
    lpValueName = L"SelectedSize";
  }
  RegDeleteValueW(param_1,lpValueName);
  RegCloseKey(param_1);
  return;
}



undefined4 * __cdecl FUN_00401fc0(LPCWSTR param_1)

{
  undefined4 *lpMem;
  uint uVar1;
  
  lpMem = (undefined4 *)HeapAlloc(hHeap_004114a8,0,0xc);
  if (lpMem != (undefined4 *)0x0) {
    uVar1 = FUN_00401090(param_1);
    lpMem[2] = uVar1;
    if (uVar1 != 0) {
      lpMem[1] = 0;
      *lpMem = 0;
      return lpMem;
    }
    HeapFree(hHeap_004114a8,0,lpMem);
  }
  return (undefined4 *)0x0;
}



void __cdecl FUN_00402020(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_004020b0(*(undefined4 *)(*param_1 + 8),(LPCWSTR)&lpString_0040eab0);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return;
  }
  FUN_00402060(&DAT_00411140,param_1);
  return;
}



undefined4 __cdecl FUN_00402060(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)*param_2;
  piVar3 = (int *)*param_1;
  if ((int *)*param_1 == piVar1) {
    *param_1 = *piVar1;
  }
  else {
    do {
      piVar2 = piVar3;
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      piVar3 = (int *)*piVar2;
    } while ((int *)*piVar2 != piVar1);
    *piVar2 = *piVar1;
  }
  FUN_004021b0((undefined4 *)*param_2);
  *param_2 = 0;
  return 1;
}



bool __cdecl FUN_004020b0(undefined4 param_1,LPCWSTR param_2)

{
  int iVar1;
  LSTATUS LVar2;
  WCHAR local_94 [70];
  HKEY local_8;
  
  iVar1 = wsprintfW(local_94,L"%s\\%s",L"Control Panel\\Appearance\\ClassicSchemes",param_1);
  if (iVar1 < 0x29) {
    return false;
  }
  LVar2 = RegOpenKeyExW((HKEY)0x80000001,local_94,0,0x10000,&local_8);
  if (LVar2 != 0) {
    return false;
  }
  LVar2 = SHDeleteKeyW(local_8,param_2);
  RegCloseKey(local_8);
  return (bool)('\x01' - (LVar2 != 0));
}



void __cdecl FUN_00402130(int *param_1,int *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_004020b0(*(undefined4 *)(*param_1 + 8),*(LPCWSTR *)(*param_2 + 8));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return;
  }
  FUN_00402060((int *)(*param_1 + 4),param_2);
  return;
}



int * __cdecl FUN_00402170(int *param_1,LPCWSTR param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    do {
      iVar1 = lstrcmpiW((LPCWSTR)param_1[2],param_2);
      if (iVar1 == 0) {
        return param_1;
      }
      param_1 = (int *)*param_1;
    } while (param_1 != (int *)0x0);
  }
  return (int *)0x0;
}



void __cdecl FUN_004021b0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[1];
  if ((int *)param_1[1] != (int *)0x0) {
    do {
      piVar1 = (int *)*piVar2;
      FUN_004021b0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)0x0);
    param_1[1] = 0;
  }
  if ((LPVOID)param_1[2] != (LPVOID)0x0) {
    HeapFree(hHeap_004114a8,0,(LPVOID)param_1[2]);
    param_1[2] = 0;
  }
  *param_1 = 0;
  HeapFree(hHeap_004114a8,0,param_1);
  return;
}



void __cdecl FUN_00402210(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    do {
      puVar1 = (undefined4 *)*param_1;
      if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
        FUN_00402210((undefined4 *)param_1[1]);
        param_1[1] = 0;
      }
      if ((LPVOID)param_1[2] != (LPVOID)0x0) {
        HeapFree(hHeap_004114a8,0,(LPVOID)param_1[2]);
        param_1[2] = 0;
      }
      *param_1 = 0;
      HeapFree(hHeap_004114a8,0,param_1);
      param_1 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  return;
}



undefined4 __cdecl FUN_00402280(int *param_1,undefined4 *param_2)

{
  LSTATUS LVar1;
  int iVar2;
  int *piVar3;
  WCHAR local_f8 [70];
  WCHAR local_6c [14];
  WCHAR local_50 [30];
  DWORD local_14;
  HKEY local_10;
  DWORD local_c;
  HKEY local_8;
  
  *param_2 = 0;
  param_2[1] = 0;
  LVar1 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Appearance\\ClassicSchemes",0,3,&local_8);
  if (LVar1 == 0) {
    local_c = 0x3a;
    LVar1 = FUN_00401290(local_8,L"SelectedScheme",local_50,&local_c);
    if (LVar1 != 0) {
      local_c = 0x3a;
      LVar1 = FUN_00401290(local_8,L"SelectedStyle",local_50,&local_c);
      if (LVar1 != 0) {
        return 0;
      }
      iVar2 = lstrlenW(local_50);
      LVar1 = RegSetValueExW(local_8,L"SelectedScheme",0,1,(BYTE *)local_50,iVar2 * 2 + 2);
      if (LVar1 == 0) {
        RegDeleteValueW(local_8,L"SelectedStyle");
      }
    }
    RegCloseKey(local_8);
    if (param_1 != (int *)0x0) {
      do {
        iVar2 = lstrcmpiW((LPCWSTR)param_1[2],local_50);
        if (iVar2 == 0) {
          if (param_1 == (int *)0x0) {
            return 0;
          }
          *param_2 = param_1;
          iVar2 = wsprintfW(local_f8,L"%s\\%s",L"Control Panel\\Appearance\\ClassicSchemes",
                            param_1[2]);
          if (iVar2 < 0x29) goto LAB_00402429;
          LVar1 = RegOpenKeyExW((HKEY)0x80000001,local_f8,0,1,&local_10);
          if (LVar1 != 0) {
            param_2[1] = param_1[1];
            return 1;
          }
          local_14 = 0x1c;
          LVar1 = FUN_00401290(local_10,L"SelectedSize",local_6c,&local_14);
          RegCloseKey(local_10);
          if ((LVar1 != 0) || (piVar3 = (int *)param_1[1], piVar3 == (int *)0x0)) goto LAB_00402429;
          while (iVar2 = lstrcmpiW((LPCWSTR)piVar3[2],local_6c), iVar2 != 0) {
            piVar3 = (int *)*piVar3;
            if (piVar3 == (int *)0x0) {
              param_2[1] = 0;
              return 1;
            }
          }
          if (piVar3 == (int *)0x0) {
LAB_00402429:
            piVar3 = (int *)0x0;
          }
          param_2[1] = piVar3;
          return 1;
        }
        param_1 = (int *)*param_1;
      } while (param_1 != (int *)0x0);
    }
  }
  return 0;
}



undefined4 * __cdecl FUN_00402440(HKEY param_1)

{
  undefined4 *puVar1;
  HKEY pHVar2;
  int iVar3;
  LSTATUS LVar4;
  WCHAR local_b0 [70];
  WCHAR local_24 [14];
  DWORD local_8;
  
  pHVar2 = param_1;
  iVar3 = wsprintfW(local_b0,L"%s\\%s",L"Control Panel\\Appearance\\ClassicSchemes",
                    param_1[2].unused);
  if (0x28 < iVar3) {
    LVar4 = RegOpenKeyExW((HKEY)0x80000001,local_b0,0,1,&param_1);
    if (LVar4 != 0) {
      return (undefined4 *)pHVar2[1].unused;
    }
    local_8 = 0x1c;
    LVar4 = FUN_00401290(param_1,L"SelectedSize",local_24,&local_8);
    RegCloseKey(param_1);
    if (LVar4 == 0) {
      for (puVar1 = (undefined4 *)pHVar2[1].unused; puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        iVar3 = lstrcmpiW((LPCWSTR)puVar1[2],local_24);
        if (iVar3 == 0) {
          return puVar1;
        }
      }
    }
  }
  return (undefined4 *)0x0;
}



undefined4 * __cdecl FUN_00402500(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (undefined4 *)&DAT_00411160;
  case 1:
    return (undefined4 *)&DAT_004111c4;
  case 2:
    return (undefined4 *)&DAT_00411228;
  case 3:
    return (undefined4 *)&DAT_00411284;
  case 4:
    return (undefined4 *)&DAT_004112e0;
  case 5:
    return &pvParam_0041133c;
  default:
    return (undefined4 *)0x0;
  }
}



int __cdecl FUN_00402560(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return param_1 + 0x18;
  case 1:
    return param_1 + 0x7c;
  case 2:
    return param_1 + 0xe0;
  case 3:
    return param_1 + 0x13c;
  case 4:
    return param_1 + 0x198;
  case 5:
    return param_1 + 500;
  default:
    return 0;
  }
}



undefined4 __cdecl FUN_004025d0(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return *(undefined4 *)(param_1 + 4);
  case 1:
    return *(undefined4 *)(param_1 + 8);
  case 2:
    return *(undefined4 *)(param_1 + 0xc);
  case 3:
    return *(undefined4 *)(param_1 + 0x10);
  case 4:
    return *(undefined4 *)(param_1 + 0x14);
  case 5:
    return *(undefined4 *)(param_1 + 0x74);
  case 6:
    return *(undefined4 *)(param_1 + 0x78);
  case 7:
    return *(undefined4 *)(param_1 + 0xd8);
  case 8:
    return *(undefined4 *)(param_1 + 0xdc);
  default:
    return 0xffffffff;
  }
}



undefined4 * FUN_00402660(void)

{
  LSTATUS LVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  code *pcVar5;
  undefined4 *lpMem;
  undefined4 *lpMem_00;
  WCHAR local_8c [30];
  WCHAR local_50 [14];
  undefined4 *local_34;
  HKEY local_30;
  undefined4 *local_2c;
  DWORD local_28 [2];
  HKEY local_20;
  undefined4 *local_1c;
  HKEY local_18;
  undefined4 *local_14;
  HKEY local_10;
  DWORD local_c;
  DWORD local_8;
  
  pcVar5 = RegOpenKeyExW_exref;
  LVar1 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Appearance\\ClassicSchemes",0,8,&local_18)
  ;
  if (LVar1 == 0) {
    lpMem_00 = (undefined4 *)0x0;
    local_1c = (undefined4 *)0x0;
    local_c = 0;
    pcVar4 = RegCloseKey_exref;
    do {
      while( true ) {
        local_28[1] = 0x1d;
        iVar2 = RegEnumKeyExW(local_18,local_c,local_8c,local_28 + 1,(LPDWORD)0x0,(LPWSTR)0x0,
                              (LPDWORD)0x0,(PFILETIME)0x0);
        local_c = local_c + 1;
        if ((iVar2 != 0) || (iVar2 = (*pcVar5)(local_18,local_8c,0,8,&local_20), iVar2 != 0)) break;
        local_34 = lpMem_00;
        lpMem_00 = (undefined4 *)HeapAlloc(hHeap_004114a8,0,0xc);
        if (lpMem_00 == (undefined4 *)0x0) {
          (*pcVar4)(local_20);
        }
        else {
          uVar3 = FUN_00401090(local_8c);
          lpMem_00[2] = uVar3;
          if (uVar3 == 0) {
            HeapFree(hHeap_004114a8,0,lpMem_00);
            lpMem_00 = (undefined4 *)0x0;
            (*pcVar4)(local_20);
          }
          else {
            lpMem = (undefined4 *)0x0;
            lpMem_00[1] = 0;
            *lpMem_00 = 0;
            local_10 = local_20;
            local_14 = (undefined4 *)0x0;
            local_8 = 0;
            do {
              while( true ) {
                local_28[0] = 0xe;
                iVar2 = RegEnumKeyExW(local_10,local_8,local_50,local_28,(LPDWORD)0x0,(LPWSTR)0x0,
                                      (LPDWORD)0x0,(PFILETIME)0x0);
                local_8 = local_8 + 1;
                if ((iVar2 != 0) ||
                   (iVar2 = RegOpenKeyExW(local_10,local_50,0,0x20000,&local_30), iVar2 != 0))
                break;
                local_2c = lpMem;
                lpMem = (undefined4 *)HeapAlloc(hHeap_004114a8,0,0xc);
                if (lpMem == (undefined4 *)0x0) {
                  RegCloseKey(local_30);
                }
                else {
                  uVar3 = FUN_00401090(local_50);
                  lpMem[2] = uVar3;
                  if (uVar3 == 0) {
                    HeapFree(hHeap_004114a8,0,lpMem);
                    lpMem = (undefined4 *)0x0;
                    RegCloseKey(local_30);
                  }
                  else {
                    lpMem[1] = 0;
                    *lpMem = 0;
                    if (local_14 == (undefined4 *)0x0) {
                      local_14 = lpMem;
                      RegCloseKey(local_30);
                    }
                    else {
                      *local_2c = lpMem;
                      RegCloseKey(local_30);
                    }
                  }
                }
              }
            } while (iVar2 != 0x103);
            lpMem_00[1] = local_14;
            pcVar5 = RegOpenKeyExW_exref;
            pcVar4 = RegCloseKey_exref;
            if (local_14 == (undefined4 *)0x0) {
              FUN_00402210(lpMem_00);
              pcVar5 = RegOpenKeyExW_exref;
              pcVar4 = RegCloseKey_exref;
              RegCloseKey(local_20);
            }
            else if (local_1c == (undefined4 *)0x0) {
              local_1c = lpMem_00;
              RegCloseKey(local_20);
            }
            else {
              *local_34 = lpMem_00;
              pcVar4 = RegCloseKey_exref;
              RegCloseKey(local_20);
            }
          }
        }
      }
    } while (iVar2 != 0x103);
    (*pcVar4)(local_18);
    return local_1c;
  }
  return (undefined4 *)0x0;
}



void FUN_00402900(void)

{
  byte bVar1;
  LSTATUS LVar2;
  HRESULT HVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar4;
  int iVar5;
  code *pcVar6;
  LPCWSTR lpString;
  HKEY dwIndex;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  WCHAR local_a04 [260];
  WCHAR local_7fc [28];
  undefined2 local_7c4;
  undefined2 local_5f6;
  undefined4 local_5f4 [125];
  undefined4 local_400 [23];
  int local_3a4 [31];
  undefined4 local_328;
  undefined4 local_324;
  BYTE local_320 [4];
  undefined4 local_31c [125];
  undefined4 local_128 [23];
  int local_cc [27];
  int local_60;
  int local_5c;
  WCHAR local_58 [30];
  DWORD local_1c [2];
  HKEY local_14;
  DWORD local_10;
  HKEY local_c;
  HKEY local_8;
  
  LVar2 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Appearance\\Schemes",0,1,&local_14);
  if (LVar2 == 0) {
    LVar2 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Appearance",0,1,&local_8);
    pcVar6 = RegCloseKey_exref;
    if (LVar2 == 0) {
      local_c = (HKEY)0x104;
      LVar2 = FUN_00401290(local_8,L"Current",local_a04,(LPDWORD)&local_c);
      if (LVar2 != 0) {
        local_a04[0] = L'\0';
      }
      RegCloseKey(local_8);
      dwIndex = (HKEY)0x0;
    }
    else {
      local_a04[0] = L'\0';
      dwIndex = (HKEY)0x0;
    }
    do {
      while( true ) {
        local_1c[1] = 0x104;
        local_10 = 0x2c8;
        LVar2 = RegEnumValueW(local_14,(DWORD)dwIndex,local_7fc,local_1c + 1,(LPDWORD)0x0,local_1c,
                              local_320,&local_10);
        dwIndex = (HKEY)((int)&dwIndex->unused + 1);
        local_8 = dwIndex;
        if (LVar2 != 0) break;
        if ((local_1c[0] == 3) && (local_10 == 0x2c8)) {
          local_5f6 = 0;
          HVar3 = SHLoadIndirectString(local_7fc,local_58,0x1d,(void **)0x0);
          iVar4 = local_cc[2];
          if (HVar3 != 0) {
            local_7c4 = 0;
          }
          lpString = local_7fc;
          if (HVar3 == 0) {
            lpString = local_58;
          }
          pcVar6 = RegCloseKey_exref;
          if (local_320[0] == '\x02') {
            puVar7 = local_31c;
            puVar9 = local_5f4;
            for (iVar5 = 0x7d; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            local_5f4[0] = 500;
            puVar7 = local_128;
            puVar9 = local_400;
            for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            piVar8 = local_cc;
            piVar10 = local_3a4;
            for (iVar5 = 0x1d; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar10 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar10 = piVar10 + 1;
            }
            if ((iVar4 != local_60) || (local_328 = 0, local_cc[3] != local_5c)) {
              local_328 = 1;
            }
            local_324 = 0;
            bVar1 = FUN_00403a70((int)local_5f4,lpString);
            dwIndex = local_8;
            pcVar6 = RegCloseKey_exref;
            if ((((CONCAT31(extraout_var,bVar1) != 0) &&
                 (bVar1 = FUN_00403bf0((int)local_5f4,lpString,L"Normal"),
                 pcVar6 = RegCloseKey_exref, CONCAT31(extraout_var_00,bVar1) != 0)) &&
                (iVar4 = lstrcmpW(local_7fc,local_a04), pcVar6 = RegCloseKey_exref, iVar4 == 0)) &&
               (LVar2 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Appearance\\ClassicSchemes",
                                      0,2,&local_c), pcVar6 = RegCloseKey_exref, LVar2 == 0)) {
              iVar4 = lstrlenW(lpString);
              RegSetValueExW(local_c,L"SelectedScheme",0,1,(BYTE *)lpString,iVar4 * 2 + 2);
              pcVar6 = RegCloseKey_exref;
              RegCloseKey(local_c);
            }
          }
        }
      }
    } while (LVar2 != 0x103);
    (*pcVar6)(local_14);
  }
  return;
}



uint __cdecl FUN_00402b70(HKEY param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  byte bVar2;
  LSTATUS LVar3;
  int iVar4;
  HKEY__ *pHVar5;
  int iVar6;
  HRESULT HVar7;
  undefined3 extraout_var;
  DWORD dwIndex;
  uint uVar8;
  HKEY__ *pHVar9;
  undefined1 local_540 [724];
  HKEY__ local_26c [6];
  undefined2 local_252;
  HKEY__ local_64 [7];
  HKEY__ local_48 [7];
  WCHAR local_2c [6];
  DWORD local_20;
  HKEY__ *local_1c;
  uint local_18;
  HKEY local_14;
  DWORD local_10;
  HKEY__ *local_c;
  DWORD local_8;
  
  LVar3 = RegOpenKeyExW(param_1,L"Sizes",0,9,&local_14);
  if (LVar3 != 0) {
    return 0;
  }
  local_10 = 10;
  iVar4 = FUN_00401290(param_1,L"SelectedSize",local_2c,&local_10);
  if (iVar4 != 0) {
    local_2c[0] = L'\0';
  }
  pHVar9 = (HKEY__ *)0x0;
  local_1c = (HKEY__ *)0x0;
  dwIndex = 0;
  while (local_8 = dwIndex, iVar4 != 0x103) {
    while( true ) {
      dwIndex = local_8;
      pHVar5 = (HKEY__ *)HeapAlloc(hHeap_004114a8,0,0x10);
      if (pHVar5 == (HKEY__ *)0x0) goto LAB_00402c30;
      local_10 = 5;
      iVar4 = RegEnumKeyExW(local_14,dwIndex,(LPWSTR)pHVar5,&local_10,(LPDWORD)0x0,(LPWSTR)0x0,
                            (LPDWORD)0x0,(PFILETIME)0x0);
      local_8 = local_8 + 1;
      if (iVar4 != 0) break;
      pHVar5[3].unused = (int)pHVar9;
      pHVar9 = pHVar5;
    }
    HeapFree(hHeap_004114a8,0,pHVar5);
    dwIndex = local_8;
  }
LAB_00402c30:
  local_1c = pHVar9;
  local_8 = dwIndex - 1;
  local_18 = 0;
  pHVar9 = local_1c;
  local_c = local_1c;
  if (local_1c != (HKEY__ *)0x0) {
    do {
      uVar1 = local_18;
      LVar3 = RegOpenKeyExW(local_14,(LPCWSTR)pHVar9,0,1,&local_c);
      if (LVar3 == 0) {
        iVar4 = lstrcmpW((LPCWSTR)pHVar9,(LPCWSTR)&lpString2_0040e994);
        iVar6 = FUN_00403490((int)local_540,param_2,pHVar9,(uint)(iVar4 == 0));
        if (iVar6 == 0) {
          RegCloseKey(local_c);
          uVar8 = 0;
          local_18 = uVar1;
        }
        else {
          if (iVar4 == 0) {
            FUN_00403a70((int)local_540,param_3);
          }
          local_20 = 0x208;
          LVar3 = FUN_00401290(local_c,L"DisplayName",(LPCWSTR)local_26c,&local_20);
          pHVar5 = pHVar9;
          if (LVar3 == 0) {
            HVar7 = SHLoadIndirectString((LPCWSTR)local_26c,(LPWSTR)local_48,0xe,(void **)0x0);
            if (HVar7 == 0) {
              pHVar5 = local_48;
            }
            else {
              local_252 = 0;
              pHVar5 = local_26c;
            }
          }
          if (1 < local_8) {
            iVar4 = FUN_00401160((ushort *)pHVar9,(undefined4 *)0x0);
            if (iVar4 == 0) {
              iVar4 = 1;
            }
            else if (iVar4 == 1) {
              iVar4 = (2 < local_8) + 2;
            }
            else if (iVar4 != 2) {
              iVar4 = iVar4 + 1;
            }
            iVar6 = lstrlenW((LPCWSTR)pHVar5);
            if (0xc < iVar6) {
              *(WCHAR *)((int)&pHVar5[5].unused + 2) = L'\0';
            }
            wsprintfW((LPWSTR)local_64,L"%u-%s",iVar4,pHVar5);
            pHVar5 = local_64;
          }
          bVar2 = FUN_00403bf0((int)local_540,param_3,pHVar5);
          uVar8 = CONCAT31(extraout_var,bVar2);
          if ((uVar8 != 0) && (iVar4 = lstrcmpW((LPCWSTR)pHVar9,local_2c), iVar4 == 0)) {
            FUN_00403e10(param_3,(LPCWSTR)pHVar5);
          }
          RegCloseKey(local_c);
        }
      }
      else {
        uVar8 = 0;
        local_18 = uVar1;
      }
      pHVar9 = (HKEY__ *)pHVar9[3].unused;
      uVar8 = local_18 | uVar8;
      pHVar5 = local_1c;
      local_18 = uVar8;
    } while (pHVar9 != (HKEY__ *)0x0);
    do {
      pHVar9 = (HKEY__ *)pHVar5[3].unused;
      HeapFree(hHeap_004114a8,0,pHVar5);
      pHVar5 = pHVar9;
    } while (pHVar9 != (HKEY__ *)0x0);
    return uVar8;
  }
  return 0;
}



void FUN_00402e00(void)

{
  LSTATUS LVar1;
  HRESULT HVar2;
  uint uVar3;
  int iVar4;
  LSTATUS LVar5;
  DWORD dwIndex;
  WCHAR *lpString;
  WCHAR local_274 [28];
  undefined2 local_23c;
  WCHAR local_6c [30];
  WCHAR local_30 [6];
  WCHAR local_24 [6];
  DWORD local_18;
  HKEY local_14;
  HKEY local_10;
  HKEY local_c;
  DWORD local_8;
  
  LVar1 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Appearance\\New Schemes",0,9,&local_c);
  if (LVar1 == 0) {
    local_8 = 10;
    LVar1 = FUN_00401290(local_c,L"SelectedStyle",local_30,&local_8);
    if (LVar1 != 0) {
      local_30[0] = L'\0';
    }
    dwIndex = 0;
    do {
      local_8 = 5;
      LVar1 = RegEnumKeyExW(local_c,dwIndex,local_24,&local_8,(LPDWORD)0x0,(LPWSTR)0x0,(LPDWORD)0x0,
                            (PFILETIME)0x0);
      dwIndex = dwIndex + 1;
      local_18 = dwIndex;
      if (LVar1 == 0) {
        LVar1 = RegOpenKeyExW(local_c,local_24,0,9,&local_10);
        if (LVar1 == 0) {
          local_8 = 0x208;
          LVar1 = FUN_00401290(local_10,L"DisplayName",local_274,&local_8);
          if (LVar1 == 0) {
            HVar2 = SHLoadIndirectString(local_274,local_6c,0x1d,(void **)0x0);
            if (HVar2 == 0) {
              lpString = local_6c;
            }
            else {
              lpString = local_274;
              local_23c = 0;
            }
          }
          else {
            lpString = local_24;
          }
          uVar3 = FUN_00402b70(local_10,local_24,lpString);
          if (uVar3 != 0) {
            iVar4 = lstrcmpW(local_24,local_30);
            if (iVar4 == 0) {
              LVar5 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Appearance\\ClassicSchemes",0,
                                    2,&local_14);
              if (LVar5 == 0) {
                iVar4 = lstrlenW(lpString);
                RegSetValueExW(local_14,L"SelectedScheme",0,1,(BYTE *)lpString,iVar4 * 2 + 2);
                RegCloseKey(local_14);
              }
            }
          }
          RegCloseKey(local_10);
          dwIndex = local_18;
        }
      }
    } while (LVar1 != 0x103);
    RegCloseKey(local_c);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL FUN_00402fa0(undefined4 *param_1)

{
  BOOL BVar1;
  
  *param_1 = 500;
  BVar1 = SystemParametersInfoW(0x29,500,param_1,0);
  _DAT_004110c0 = param_1[1];
  uRam004110cc = param_1[2];
  uRam004110d8 = param_1[3];
  uRam004110e4 = param_1[4];
  uRam004110f0 = param_1[5];
  uRam004110fc = param_1[0x1d];
  uRam00411108 = param_1[0x1e];
  uRam00411114 = param_1[0x36];
  uRam00411120 = param_1[0x37];
  return BVar1;
}



uint __cdecl FUN_004030b0(undefined4 *param_1)

{
  uint uVar1;
  DWORD DVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  uVar1 = 1;
  if (DAT_00411144 == 0) {
    uVar8 = 1;
    iVar6 = 0;
    do {
      DVar2 = GetSysColor(iVar6);
      if (DVar2 == 0xffffffff) {
        uVar8 = 0;
      }
      else {
        (&DAT_00411398)[iVar6] = DVar2;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x1f);
    uVar3 = FUN_00402fa0(&DAT_00411148);
    uVar1 = SystemParametersInfoW(0x1f,0x5c,&pvParam_0041133c,0);
    uVar4 = SystemParametersInfoW(0x1008,0,&pvParam_00411414,0);
    uVar5 = SystemParametersInfoW(0x1022,0,&pvParam_00411418,0);
    uVar1 = uVar5 & uVar3 & uVar8 & uVar4 & uVar1;
  }
  if (param_1 != (undefined4 *)0x0) {
    puVar7 = &DAT_00411148;
    for (iVar6 = 0xb5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *param_1 = *puVar7;
      puVar7 = puVar7 + 1;
      param_1 = param_1 + 1;
    }
  }
  DAT_00411144 = 1;
  return uVar1;
}



undefined4 __cdecl FUN_00403160(int param_1,HKEY param_2)

{
  int iVar1;
  LSTATUS LVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  WCHAR local_a8 [70];
  WCHAR local_1c [8];
  uint local_c;
  HKEY local_8;
  
  if (param_2->unused != 0) {
    iVar1 = wsprintfW(local_a8,L"%s\\%s",L"Control Panel\\Appearance\\ClassicSchemes",
                      *(undefined4 *)(param_2->unused + 8));
    if (0x28 < iVar1) {
      LVar2 = RegOpenKeyExW((HKEY)0x80000001,local_a8,0,1,&local_8);
      if (LVar2 == 0) {
        iVar1 = 0;
        puVar5 = (uint *)(param_1 + 0x250);
        do {
          iVar3 = wsprintfW(local_1c,L"Color%d",iVar1);
          if (iVar3 < 6) {
LAB_00403205:
            uVar4 = (&DAT_00411398)[iVar1];
          }
          else {
            LVar2 = FUN_00401210(local_8,local_1c,(LPBYTE)&local_c);
            if (LVar2 != 0) goto LAB_00403205;
            uVar4 = local_c & 0xffffff;
          }
          *puVar5 = uVar4;
          iVar1 = iVar1 + 1;
          puVar5 = puVar5 + 1;
          if (0x1e < iVar1) {
            uVar4 = FUN_004011c0(local_8,L"FlatMenus",(uint)pvParam_00411418);
            *(uint *)(param_1 + 0x2d0) = uVar4;
            uVar4 = FUN_004011c0(local_8,L"Gradients",(uint)pvParam_00411414);
            *(uint *)(param_1 + 0x2cc) = uVar4;
            RegCloseKey(local_8);
            FUN_00403280(param_1,param_2);
            return 1;
          }
        } while( true );
      }
    }
  }
  return 0;
}



uint __cdecl FUN_00403280(int param_1,HKEY param_2)

{
  HKEY pHVar1;
  int *piVar2;
  int iVar3;
  LSTATUS LVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *extraout_EDX;
  uint uVar7;
  undefined4 *puVar8;
  WCHAR local_d0 [84];
  WCHAR local_28 [8];
  WCHAR local_18 [6];
  int local_c;
  uint local_8;
  
  pHVar1 = param_2 + 1;
  if (pHVar1->unused != 0) {
    piVar2 = &param_2->unused;
    param_2 = (HKEY)0x0;
    iVar3 = wsprintfW(local_d0,L"%s\\%s\\%s",L"Control Panel\\Appearance\\ClassicSchemes",
                      *(undefined4 *)(*piVar2 + 8),*(undefined4 *)(pHVar1->unused + 8));
    if ((0x2a < iVar3) &&
       (LVar4 = RegOpenKeyExW((HKEY)0x80000001,local_d0,0,1,&param_2), LVar4 == 0)) {
      uVar7 = 1;
      iVar3 = 0;
      local_8 = 1;
      do {
        iVar5 = wsprintfW(local_28,L"Font%d",iVar3);
        if (iVar5 < 5) {
          iVar5 = FUN_00402560(param_1,iVar3);
          if ((iVar5 != 0) && (puVar6 = FUN_00402500(iVar3), puVar6 != (undefined4 *)0x0)) {
            puVar8 = extraout_EDX;
            for (iVar5 = 0x17; uVar7 = local_8, iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            }
          }
        }
        else {
          local_8 = FUN_004036f0(param_2,local_28,iVar3,param_1);
          local_8 = uVar7 & local_8;
          uVar7 = local_8;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
      if ((LOGFONTW *)(param_1 + 0x18) != (LOGFONTW *)0x0) {
        FUN_00404220((LOGFONTW *)(param_1 + 0x18),4);
      }
      if ((LOGFONTW *)(param_1 + 0x7c) != (LOGFONTW *)0x0) {
        FUN_00404220((LOGFONTW *)(param_1 + 0x7c),6);
      }
      if ((LOGFONTW *)(param_1 + 0xe0) != (LOGFONTW *)0x0) {
        FUN_00404220((LOGFONTW *)(param_1 + 0xe0),8);
      }
      iVar3 = 0;
      do {
        pHVar1 = param_2;
        iVar5 = wsprintfW(local_18,L"Size%d",iVar3);
        if ((iVar5 < 5) || (LVar4 = FUN_00401210(pHVar1,local_18,(LPBYTE)&local_c), LVar4 != 0)) {
LAB_004033f1:
          iVar5 = FUN_004025d0(0x411148,iVar3);
        }
        else {
          iVar5 = local_c;
          if (nNumerator_004114ac != 0x60) {
            iVar5 = MulDiv(local_c,nNumerator_004114ac,0x60);
          }
          if (iVar5 < 0) goto LAB_004033f1;
        }
        FUN_00403f50(param_1,iVar3,iVar5);
        iVar3 = iVar3 + 1;
        if (8 < iVar3) {
          RegCloseKey(param_2);
          return local_8;
        }
      } while( true );
    }
  }
  return 0;
}



void FUN_00403430(void)

{
  DAT_00411578 = 0;
  DAT_0041157c = 0;
  if (DAT_00411140 != (undefined4 *)0x0) {
    FUN_00402210(DAT_00411140);
  }
  DAT_00411140 = FUN_00402660();
  if (DAT_00411140 == (undefined4 *)0x0) {
    FUN_00402e00();
    DAT_00411140 = FUN_00402660();
    if (DAT_00411140 == (undefined4 *)0x0) {
      FUN_00402900();
      DAT_00411140 = FUN_00402660();
    }
  }
  return;
}



undefined4 __cdecl FUN_00403490(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HKEY pHVar1;
  int iVar2;
  LSTATUS LVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *extraout_EDX;
  uint *puVar8;
  code *pcVar9;
  undefined4 *puVar10;
  WCHAR local_ac [56];
  WCHAR local_3c [8];
  WCHAR local_2c [2];
  WCHAR local_28 [8];
  int local_18;
  uint local_14;
  undefined4 local_10 [2];
  HKEY local_8;
  
  pcVar9 = wsprintfW_exref;
  iVar2 = wsprintfW(local_ac,L"%s\\%s\\Sizes\\%s",L"Control Panel\\Appearance\\New Schemes",param_2,
                    param_3);
  if ((iVar2 < 0x2e) ||
     (LVar3 = RegOpenKeyExW((HKEY)0x80000001,local_ac,0,1,&local_8), pHVar1 = local_8, LVar3 != 0))
  {
    return 0;
  }
  if (param_4 != 0) {
    iVar2 = 0;
    puVar8 = (uint *)(param_1 + 0x250);
    do {
      iVar4 = wsprintfW(local_2c,L"Color #%d",iVar2);
      if ((iVar4 < 8) || (LVar3 = FUN_00401210(pHVar1,local_2c,(LPBYTE)&local_14), LVar3 != 0)) {
        uVar5 = (&DAT_00411398)[iVar2];
      }
      else {
        uVar5 = local_14 & 0xffffff;
      }
      *puVar8 = uVar5;
      iVar2 = iVar2 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar2 < 0x1f);
    local_10[0] = 0;
    LVar3 = FUN_00401210(pHVar1,L"Flat Menus",(LPBYTE)local_10);
    uVar7 = 0;
    if (LVar3 == 0) {
      uVar7 = local_10[0];
    }
    *(undefined4 *)(param_1 + 0x2d0) = uVar7;
    pcVar9 = wsprintfW_exref;
    if ((*(int *)(param_1 + 600) == *(int *)(param_1 + 700)) &&
       (*(int *)(param_1 + 0x25c) == *(int *)(param_1 + 0x2c0))) {
      *(undefined4 *)(param_1 + 0x2cc) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x2cc) = 1;
    }
  }
  iVar2 = 0;
  do {
    iVar4 = (*pcVar9)(local_3c,L"Font #%d",iVar2);
    if (iVar4 < 7) {
      iVar4 = FUN_00402560(param_1,iVar2);
      if ((iVar4 != 0) && (puVar6 = FUN_00402500(iVar2), puVar6 != (undefined4 *)0x0)) {
        puVar10 = extraout_EDX;
        for (iVar4 = 0x17; pcVar9 = wsprintfW_exref, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        }
      }
    }
    else {
      FUN_004036f0(local_8,local_3c,iVar2,param_1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  if ((LOGFONTW *)(param_1 + 0x18) != (LOGFONTW *)0x0) {
    FUN_00404220((LOGFONTW *)(param_1 + 0x18),4);
  }
  if ((LOGFONTW *)(param_1 + 0x7c) != (LOGFONTW *)0x0) {
    FUN_00404220((LOGFONTW *)(param_1 + 0x7c),6);
  }
  if ((LOGFONTW *)(param_1 + 0xe0) != (LOGFONTW *)0x0) {
    FUN_00404220((LOGFONTW *)(param_1 + 0xe0),8);
  }
  iVar2 = 0;
  do {
    pHVar1 = local_8;
    iVar4 = wsprintfW(local_28,L"Size #%d",iVar2);
    if ((iVar4 < 7) || (LVar3 = FUN_00401250(pHVar1,local_28,(LPBYTE)&local_18), LVar3 != 0)) {
LAB_004036af:
      iVar4 = FUN_004025d0(0x411148,iVar2);
    }
    else {
      iVar4 = local_18;
      if (nNumerator_004114ac != 0x60) {
        iVar4 = MulDiv(local_18,nNumerator_004114ac,0x60);
      }
      if (iVar4 < 0) goto LAB_004036af;
    }
    FUN_00403f50(param_1,iVar2,iVar4);
    iVar2 = iVar2 + 1;
    if (8 < iVar2) {
      RegCloseKey(local_8);
      return 1;
    }
  } while( true );
}



undefined4 __cdecl FUN_004036f0(HKEY param_1,LPCWSTR param_2,undefined4 param_3,int param_4)

{
  int *lpData;
  LSTATUS LVar1;
  int iVar2;
  int *piVar3;
  DWORD local_c;
  DWORD local_8;
  
  lpData = (int *)FUN_00402560(param_4,param_3);
  if (lpData != (int *)0x0) {
    local_8 = 0x5c;
    LVar1 = RegQueryValueExW(param_1,param_2,(LPDWORD)0x0,&local_c,(LPBYTE)lpData,&local_8);
    if (((LVar1 == 0) && (local_c == 3)) && (local_8 == 0x5c)) {
      if (nNumerator_004114ac != 0x60) {
        iVar2 = MulDiv(*lpData,nNumerator_004114ac,0x60);
        *lpData = iVar2;
        iVar2 = MulDiv(lpData[1],nNumerator_004114ac,0x60);
        lpData[1] = iVar2;
      }
      return 1;
    }
    piVar3 = FUN_00402500(param_3);
    if (piVar3 != (int *)0x0) {
      for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
        *lpData = *piVar3;
        piVar3 = piVar3 + 1;
        lpData = lpData + 1;
      }
    }
  }
  return 0;
}



undefined4 FUN_00403790(void)

{
  DWORD DVar1;
  int nIndex;
  undefined4 uVar2;
  
  uVar2 = 1;
  nIndex = 0;
  do {
    DVar1 = GetSysColor(nIndex);
    if (DVar1 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      (&DAT_00411398)[nIndex] = DVar1;
    }
    nIndex = nIndex + 1;
  } while (nIndex < 0x1f);
  return uVar2;
}



void FUN_004037c0(void)

{
  SystemParametersInfoW(0x1022,0,&pvParam_00411418,0);
  return;
}



void FUN_004037e0(void)

{
  SystemParametersInfoW(0x1008,0,&pvParam_00411414,0);
  return;
}



void FUN_00403800(void)

{
  SystemParametersInfoW(0x1f,0x5c,&pvParam_0041133c,0);
  return;
}



void FUN_00403820(void)

{
  FUN_00402fa0(&DAT_00411148);
  return;
}



undefined4 __cdecl FUN_00403830(HKEY param_1,LPCWSTR param_2)

{
  undefined4 *puVar1;
  HKEY pHVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  LSTATUS LVar7;
  int iVar8;
  uint uVar9;
  undefined3 extraout_var;
  undefined1 local_380 [592];
  uint auStack_130 [31];
  uint local_b4;
  uint local_b0;
  WCHAR local_ac [70];
  WCHAR local_20 [8];
  uint local_10;
  HKEY__ local_c;
  undefined4 *local_8;
  
  pHVar2 = param_1;
  local_c.unused = (int)param_1;
  puVar1 = (undefined4 *)param_1[1].unused;
  local_8 = puVar1;
  iVar6 = wsprintfW(local_ac,L"%s\\%s",L"Control Panel\\Appearance\\ClassicSchemes",
                    param_1[2].unused);
  if ((0x28 < iVar6) && (LVar7 = RegOpenKeyExW((HKEY)0x80000001,local_ac,0,1,&param_1), LVar7 == 0))
  {
    iVar6 = 0;
    do {
      iVar8 = wsprintfW(local_20,L"Color%d",iVar6);
      if ((iVar8 < 6) || (LVar7 = FUN_00401210(param_1,local_20,(LPBYTE)&local_10), LVar7 != 0)) {
        uVar9 = (&DAT_00411398)[iVar6];
      }
      else {
        uVar9 = local_10 & 0xffffff;
      }
      auStack_130[iVar6] = uVar9;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x1f);
    local_b0 = FUN_004011c0(param_1,L"FlatMenus",(uint)pvParam_00411418);
    local_b4 = FUN_004011c0(param_1,L"Gradients",(uint)pvParam_00411414);
    RegCloseKey(param_1);
    FUN_00403280((int)local_380,&local_c);
    bVar3 = FUN_00403a70((int)local_380,param_2);
    bVar3 = bVar3 & 1;
    while (puVar1 != (undefined4 *)0x0) {
      uVar9 = FUN_00403280((int)local_380,&local_c);
      if (uVar9 == 0) {
        bVar3 = 0;
      }
      else {
        bVar4 = FUN_00403bf0((int)local_380,param_2,puVar1[2]);
        bVar3 = bVar3 & bVar4;
      }
      puVar1 = (undefined4 *)*puVar1;
      local_8 = puVar1;
    }
    if ((bVar3 != 0) &&
       (bVar5 = FUN_004020b0(pHVar2[2].unused,(LPCWSTR)&lpString_0040eab0),
       CONCAT31(extraout_var,bVar5) != 0)) {
      HeapFree(hHeap_004114a8,0,(LPVOID)pHVar2[2].unused);
      uVar9 = FUN_00401090(param_2);
      pHVar2[2].unused = uVar9;
      return 1;
    }
  }
  return 0;
}



undefined4 __cdecl FUN_004039e0(int param_1,int param_2,LPCWSTR param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined1 local_2e0 [724];
  HKEY__ local_c;
  int local_8;
  
  local_c.unused = param_1;
  local_8 = param_2;
  uVar3 = FUN_00403280((int)local_2e0,&local_c);
  if (uVar3 != 0) {
    bVar1 = FUN_00403bf0((int)local_2e0,*(undefined4 *)(param_1 + 8),param_3);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      bVar2 = FUN_004020b0(*(undefined4 *)(param_1 + 8),*(LPCWSTR *)(param_2 + 8));
      if (CONCAT31(extraout_var_00,bVar2) != 0) {
        HeapFree(hHeap_004114a8,0,*(LPVOID *)(param_2 + 8));
        uVar3 = FUN_00401090(param_3);
        *(uint *)(param_2 + 8) = uVar3;
        return 1;
      }
    }
  }
  return 0;
}



byte __cdecl FUN_00403a70(int param_1,undefined4 param_2)

{
  int iVar1;
  LSTATUS LVar2;
  int iVar3;
  LSTATUS LVar4;
  byte bVar5;
  BYTE *lpData;
  WCHAR local_a8 [70];
  WCHAR local_1c [8];
  undefined4 local_c;
  HKEY local_8;
  
  iVar1 = wsprintfW(local_a8,L"%s\\%s",L"Control Panel\\Appearance\\ClassicSchemes",param_2);
  if (0x28 < iVar1) {
    LVar2 = RegCreateKeyExW((HKEY)0x80000001,local_a8,0,(LPWSTR)0x0,0,2,(LPSECURITY_ATTRIBUTES)0x0,
                            &local_8,(LPDWORD)0x0);
    if (LVar2 == 0) {
      bVar5 = 1;
      iVar1 = 0;
      lpData = (BYTE *)(param_1 + 0x250);
      do {
        iVar3 = wsprintfW(local_1c,L"Color%d",iVar1);
        if (5 < iVar3) {
          LVar2 = RegSetValueExW(local_8,local_1c,0,4,lpData,4);
          bVar5 = bVar5 & LVar2 == 0;
        }
        iVar1 = iVar1 + 1;
        lpData = lpData + 4;
      } while (iVar1 < 0x1f);
      local_c = *(undefined4 *)(param_1 + 0x2d0);
      LVar2 = RegSetValueExW(local_8,L"FlatMenus",0,4,(BYTE *)&local_c,4);
      local_c = *(undefined4 *)(param_1 + 0x2cc);
      LVar4 = RegSetValueExW(local_8,L"Gradients",0,4,(BYTE *)&local_c,4);
      RegCloseKey(local_8);
      return (LVar4 == 0 && LVar2 == 0) & bVar5;
    }
  }
  return 0;
}



void __cdecl FUN_00403b90(LPCWSTR param_1,LPCWSTR param_2)

{
  LSTATUS LVar1;
  int iVar2;
  HKEY local_8;
  
  LVar1 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Appearance\\ClassicSchemes",0,2,&local_8);
  if (LVar1 == 0) {
    iVar2 = lstrlenW(param_1);
    RegSetValueExW(local_8,L"SelectedScheme",0,1,(BYTE *)param_1,iVar2 * 2 + 2);
    RegCloseKey(local_8);
  }
  FUN_00403e10(param_1,param_2);
  return;
}



byte __cdecl FUN_00403bf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  LSTATUS LVar2;
  int iVar3;
  int *lpData;
  byte bVar4;
  code *pcVar5;
  WCHAR local_cc [84];
  WCHAR local_24 [8];
  int local_14;
  int local_10;
  int local_c;
  HKEY local_8;
  
  pcVar5 = wsprintfW_exref;
  iVar1 = wsprintfW(local_cc,L"%s\\%s\\%s",L"Control Panel\\Appearance\\ClassicSchemes",param_2,
                    param_3);
  if ((0x2a < iVar1) &&
     (LVar2 = RegCreateKeyExW((HKEY)0x80000001,local_cc,0,(LPWSTR)0x0,0,2,(LPSECURITY_ATTRIBUTES)0x0
                              ,&local_8,(LPDWORD)0x0), LVar2 == 0)) {
    bVar4 = 1;
    iVar1 = 0;
    do {
      iVar3 = (*pcVar5)(local_24,L"Font%d",iVar1);
      if (iVar3 < 5) {
        bVar4 = 0;
      }
      else {
        lpData = (int *)FUN_00402560(param_1,iVar1);
        if (lpData == (int *)0x0) {
          bVar4 = 0;
          pcVar5 = wsprintfW_exref;
        }
        else {
          local_10 = lpData[1];
          local_c = *lpData;
          if (nNumerator_004114ac != 0x60) {
            iVar3 = MulDiv(local_c,0x60,nNumerator_004114ac);
            *lpData = iVar3;
            iVar3 = MulDiv(lpData[1],0x60,nNumerator_004114ac);
            lpData[1] = iVar3;
          }
          iVar3 = lstrlenW((LPCWSTR)(lpData + 7));
          if (iVar3 + 1 < 0x20) {
            FUN_00401060((int *)((int)lpData + (iVar3 + 0xf) * 2),0,(0x20 - (iVar3 + 1)) * 2);
          }
          RegSetValueExW(local_8,local_24,0,3,(BYTE *)lpData,0x5c);
          pcVar5 = wsprintfW_exref;
          if (nNumerator_004114ac != 0x60) {
            *lpData = local_c;
            lpData[1] = local_10;
            pcVar5 = wsprintfW_exref;
          }
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
    iVar1 = 0;
    do {
      iVar3 = wsprintfW(local_24,L"Size%d",iVar1);
      if (iVar3 < 5) {
        bVar4 = 0;
      }
      else {
        iVar3 = FUN_004025d0(param_1,iVar1);
        if (nNumerator_004114ac != 0x60) {
          iVar3 = MulDiv(iVar3,0x60,nNumerator_004114ac);
        }
        local_14 = iVar3;
        LVar2 = RegSetValueExW(local_8,local_24,0,4,(BYTE *)&local_14,4);
        bVar4 = bVar4 & LVar2 == 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 9);
    RegCloseKey(local_8);
    return bVar4;
  }
  return 0;
}



void __cdecl FUN_00403db0(LPCWSTR param_1)

{
  LSTATUS LVar1;
  int iVar2;
  HKEY local_8;
  
  LVar1 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Appearance\\ClassicSchemes",0,2,&local_8);
  if (LVar1 == 0) {
    iVar2 = lstrlenW(param_1);
    RegSetValueExW(local_8,L"SelectedScheme",0,1,(BYTE *)param_1,iVar2 * 2 + 2);
    RegCloseKey(local_8);
  }
  return;
}



void __cdecl FUN_00403e10(undefined4 param_1,LPCWSTR param_2)

{
  int iVar1;
  LSTATUS LVar2;
  WCHAR local_94 [70];
  HKEY local_8;
  
  iVar1 = wsprintfW(local_94,L"%s\\%s",L"Control Panel\\Appearance\\ClassicSchemes",param_1);
  if (0x28 < iVar1) {
    LVar2 = RegOpenKeyExW((HKEY)0x80000001,local_94,0,2,&local_8);
    if (LVar2 == 0) {
      iVar1 = lstrlenW(param_2);
      RegSetValueExW(local_8,L"SelectedSize",0,1,(BYTE *)param_2,iVar1 * 2 + 2);
      RegCloseKey(local_8);
    }
  }
  return;
}



undefined4 __cdecl FUN_00403e90(HKEY param_1,ushort *param_2)

{
  LSTATUS LVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  int iVar6;
  WCHAR local_20 [12];
  int local_8;
  
  LVar1 = RegCreateKeyExW(param_1,L"Control Panel\\Colors",0,(LPWSTR)0x0,0,2,
                          (LPSECURITY_ATTRIBUTES)0x0,&param_1,(LPDWORD)0x0);
  if (LVar1 == 0) {
    local_8 = (int)&PTR_u_Scrollbar_00411000 - (int)param_2;
    iVar6 = 0x1f;
    uVar3 = 1;
    puVar5 = param_2;
    do {
      iVar2 = wsprintfW(local_20,L"%d %d %d",*puVar5 & 0xff,(uint)(*puVar5 >> 8),
                        (uint)(byte)puVar5[1]);
      if (iVar2 < 5) {
        uVar4 = 0;
      }
      else {
        iVar2 = lstrlenW(local_20);
        LVar1 = RegSetValueExW(param_1,*(LPCWSTR *)(local_8 + (int)puVar5),0,1,(BYTE *)local_20,
                               iVar2 * 2 + 2);
        uVar4 = 0;
        if (LVar1 == 0) {
          uVar4 = uVar3;
        }
      }
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 + -1;
      uVar3 = uVar4;
    } while (iVar6 != 0);
    RegCloseKey(param_1);
    return uVar4;
  }
  return 0;
}



int __cdecl FUN_00403f50(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_004110b8 + param_2 * 0xc);
  if ((*(int *)(&DAT_004110b8 + param_2 * 0xc) <= param_3) &&
     (iVar1 = param_3, *(int *)(&DAT_004110bc + param_2 * 0xc) < param_3)) {
    iVar1 = *(int *)(&DAT_004110bc + param_2 * 0xc);
  }
  switch(param_2) {
  case 0:
    *(int *)(param_1 + 4) = iVar1;
    *(int *)(&DAT_004110c0 + param_2 * 0xc) = iVar1;
    return iVar1;
  case 1:
    *(int *)(param_1 + 8) = iVar1;
    *(int *)(&DAT_004110c0 + param_2 * 0xc) = iVar1;
    return iVar1;
  case 2:
    *(int *)(param_1 + 0xc) = iVar1;
    *(int *)(&DAT_004110c0 + param_2 * 0xc) = iVar1;
    return iVar1;
  case 3:
    *(int *)(param_1 + 0x10) = iVar1;
    *(int *)(&DAT_004110c0 + param_2 * 0xc) = iVar1;
    return iVar1;
  case 4:
    *(int *)(param_1 + 0x14) = iVar1;
    *(int *)(&DAT_004110c0 + param_2 * 0xc) = iVar1;
    return iVar1;
  case 5:
    *(int *)(param_1 + 0x74) = iVar1;
    *(int *)(&DAT_004110c0 + param_2 * 0xc) = iVar1;
    return iVar1;
  case 6:
    *(int *)(param_1 + 0x78) = iVar1;
    *(int *)(&DAT_004110c0 + param_2 * 0xc) = iVar1;
    return iVar1;
  case 7:
    *(int *)(param_1 + 0xd8) = iVar1;
    *(int *)(&DAT_004110c0 + param_2 * 0xc) = iVar1;
    return iVar1;
  case 8:
    *(int *)(param_1 + 0xdc) = iVar1;
    *(int *)(&DAT_004110c0 + param_2 * 0xc) = iVar1;
    return iVar1;
  default:
    return -1;
  }
}



void __cdecl FUN_00404070(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = MulDiv(10,nNumerator_004114ac,0x48);
  param_1[0x7e] = 0;
  param_1[0x7d] = -iVar1;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 400;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  lstrcpyW((LPWSTR)(param_1 + 0x84),L"System");
  *param_1 = 500;
  param_1[1] = 2;
  param_1[2] = 0x11;
  puVar2 = param_1 + 0x7d;
  puVar3 = param_1 + 6;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[3] = 0x11;
  param_1[4] = 0x14;
  param_1[5] = 0x14;
  puVar2 = param_1 + 0x7d;
  puVar3 = param_1 + 0x1f;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x1d] = 0x14;
  param_1[0x1e] = 0x14;
  param_1[0x36] = 0x13;
  puVar2 = param_1 + 0x7d;
  puVar3 = param_1 + 0x38;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x37] = 0x13;
  puVar2 = param_1 + 0x7d;
  puVar3 = param_1 + 0x4f;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1 + 0x7d;
  puVar3 = param_1 + 0x66;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



void __cdecl FUN_00404190(int param_1)

{
  *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_1 + 0x268);
  *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_1 + 0x270);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_1 + 0x264);
  *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_1 + 0x28c);
  *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_1 + 600);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_1 + 0x25c);
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x284);
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0xff0000;
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x260);
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 1;
  return;
}



void __cdecl FUN_00404220(LOGFONTW *param_1,int param_2)

{
  HDC hdc;
  HFONT h;
  BOOL BVar1;
  int iVar2;
  tagTEXTMETRICW local_44;
  HGDIOBJ local_8;
  
  iVar2 = -1;
  hdc = GetDC((HWND)0x0);
  if (hdc != (HDC)0x0) {
    h = CreateFontIndirectW(param_1);
    if (h != (HFONT)0x0) {
      local_8 = SelectObject(hdc,h);
      if (local_8 != (HGDIOBJ)0x0) {
        BVar1 = GetTextMetricsW(hdc,&local_44);
        if (BVar1 != 0) {
          iVar2 = local_44.tmHeight;
        }
        SelectObject(hdc,local_8);
      }
      DeleteObject(h);
    }
    ReleaseDC((HWND)0x0,hdc);
    if (0 < iVar2) {
      *(int *)(&DAT_004110b8 + param_2 * 0xc) = iVar2 + 2;
      if (*(int *)(&DAT_004110bc + param_2 * 0xc) < iVar2 + 2) {
        *(int *)(&DAT_004110b8 + param_2 * 0xc) = *(int *)(&DAT_004110bc + param_2 * 0xc);
      }
    }
  }
  return;
}



LPVOID FUN_004042b0(void)

{
  LSTATUS LVar1;
  LPVOID lpMem;
  uint uVar2;
  WCHAR local_4c [32];
  DWORD local_c;
  HKEY local_8;
  
  LVar1 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Desktop",0,1,&local_8);
  if (LVar1 == 0) {
    local_c = 0x40;
    LVar1 = FUN_00401290(local_8,L"Pattern",local_4c,&local_c);
    RegCloseKey(local_8);
    if ((LVar1 == 0) && (0x1f < local_c)) {
      lpMem = HeapAlloc(hHeap_004114a8,0,8);
      if (lpMem != (LPVOID)0x0) {
        uVar2 = FUN_004019a0((ushort *)local_4c,(int)lpMem,8);
        if (uVar2 == 8) {
          return lpMem;
        }
        HeapFree(hHeap_004114a8,0,lpMem);
      }
    }
  }
  return (LPVOID)0x0;
}



BOOL FUN_00404350(uint param_1)

{
  BOOL BVar1;
  undefined4 local_10;
  uint local_c;
  
  local_10 = 0xc;
  BVar1 = SystemParametersInfoW(0x42,0xc,&local_10,0);
  if (BVar1 == 0) {
    return 0;
  }
  if (param_1 == (local_c & 1)) {
    return 1;
  }
  if (param_1 == 0) {
    local_c = local_c & 0xfffffffe;
  }
  else {
    local_c = local_c | 1;
  }
  local_c = local_c | 0x1000;
  BVar1 = SystemParametersInfoW(0x43,0xc,&local_10,3);
  return BVar1;
}



int FUN_004043c0(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  LSTATUS LVar4;
  BOOL BVar5;
  int iVar6;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  HKEY local_8;
  
  iVar6 = 0;
  if (dwInitParam_00411520 != DAT_004114c0) {
    iVar3 = wsprintfW((LPWSTR)&local_10,(LPCWSTR)&param_2_0040ea20,dwInitParam_00411520);
    if ((iVar3 == 2) &&
       (LVar4 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Desktop\\WindowMetrics",0,2,&local_8
                             ), LVar4 == 0)) {
      LVar4 = RegSetValueExW(local_8,L"Shell Icon Size",0,1,(BYTE *)&local_10,6);
      RegCloseKey(local_8);
      if (LVar4 == 0) {
        iVar6 = 1;
        goto LAB_00404445;
      }
    }
    dwInitParam_00411520 = DAT_004114c0;
  }
LAB_00404445:
  if ((pvParam_00411524 != DAT_004114c4) || (dwInitParam_00411520 != DAT_004114c0)) {
    BVar5 = SystemParametersInfoW(0xd,dwInitParam_00411520 + pvParam_00411524,(PVOID)0x0,3);
    if (BVar5 == 0) {
      pvParam_00411524 = DAT_004114c4;
    }
    else {
      iVar6 = 1;
    }
  }
  if ((pvParam_00411528 == DAT_004114c8) && (dwInitParam_00411520 == DAT_004114c0)) {
LAB_004044e3:
    if ((pvParam_00411524 == DAT_004114c4) && (pvParam_00411528 == DAT_004114c8)) goto LAB_00404509;
  }
  else {
    BVar5 = SystemParametersInfoW(0x18,dwInitParam_00411520 + pvParam_00411528,(PVOID)0x0,3);
    if (BVar5 == 0) {
      pvParam_00411528 = DAT_004114c8;
    }
    else {
      iVar6 = 1;
    }
    if (dwInitParam_00411520 == DAT_004114c0) goto LAB_004044e3;
  }
  SendMessageTimeoutW((HWND)0xffff,0x1a,0x2a,0,2,30000,(PDWORD_PTR)0x0);
LAB_00404509:
  if ((lpData_0041152c != DAT_004114cc) &&
     (LVar4 = RegOpenKeyExW((HKEY)0x80000001,
                            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",0,2,
                            &local_8), LVar4 == 0)) {
    bVar1 = true;
    if ((lpData_0041152c != DAT_004114cc) &&
       (LVar4 = RegSetValueExW(local_8,L"ListviewShadow",0,4,(BYTE *)&lpData_0041152c,4), LVar4 != 0
       )) {
      bVar1 = false;
      lpData_0041152c = DAT_004114cc;
    }
    RegCloseKey(local_8);
    SendMessageTimeoutW((HWND)0xffff,0x1a,0,0,2,30000,(PDWORD_PTR)0x0);
    if (bVar1) {
      iVar6 = 1;
    }
  }
  if (bEnable_00411530 != DAT_004114d0) {
    BVar5 = SystemParametersInfoW(0x103f,0,bEnable_00411530,3);
    if (BVar5 == 0) {
      bEnable_00411530 = DAT_004114d0;
    }
    else {
      iVar6 = 1;
    }
    if (bEnable_00411530 == (PVOID)0x0) {
      DAT_00411558 = 0;
    }
  }
  if (pvParam_00411534 != DAT_004114d4) {
    BVar5 = SystemParametersInfoW(0x1025,0,pvParam_00411534,3);
    if (BVar5 == 0) {
      pvParam_00411534 = DAT_004114d4;
    }
    else {
      iVar6 = 1;
    }
  }
  if (pvParam_00411538 != DAT_004114d8) {
    BVar5 = SystemParametersInfoW(0x101b,0,pvParam_00411538,3);
    if (BVar5 == 0) {
      pvParam_00411538 = DAT_004114d8;
    }
    else {
      iVar6 = 1;
    }
  }
  if (pvParam_0041153c != DAT_004114dc) {
    BVar5 = SystemParametersInfoW(0x1003,0,pvParam_0041153c,3);
    if (BVar5 == 0) {
      pvParam_0041153c = DAT_004114dc;
    }
    else {
      iVar6 = 1;
    }
  }
  if (pvParam_00411540 != DAT_004114e0) {
    BVar5 = SystemParametersInfoW(0x1013,0,pvParam_00411540,3);
    if (BVar5 == 0) {
      pvParam_00411540 = DAT_004114e0;
    }
    else {
      iVar6 = 1;
    }
  }
  if (pvParam_00411544 != DAT_004114e4) {
    BVar5 = SystemParametersInfoW(0x1015,0,pvParam_00411544,3);
    if (BVar5 == 0) {
      pvParam_00411544 = DAT_004114e4;
    }
    else {
      iVar6 = 1;
    }
  }
  if (pvParam_00411548 != DAT_004114e8) {
    BVar5 = SystemParametersInfoW(0x1017,0,pvParam_00411548,3);
    if (BVar5 == 0) {
      pvParam_00411548 = DAT_004114e8;
    }
    else {
      iVar6 = 1;
    }
  }
  if (pvParam_0041154c != DAT_004114ec) {
    BVar5 = SystemParametersInfoW(0x1019,0,pvParam_0041154c,3);
    if (BVar5 == 0) {
      pvParam_0041154c = DAT_004114ec;
    }
    else {
      iVar6 = 1;
    }
  }
  if (pvParam_00411550 != DAT_004114f0) {
    BVar5 = SystemParametersInfoW(0x1005,0,pvParam_00411550,3);
    if (BVar5 == 0) {
      pvParam_00411550 = DAT_004114f0;
    }
    else {
      iVar6 = 1;
    }
  }
  if (pvParam_00411554 != DAT_004114f4) {
    BVar5 = SystemParametersInfoW(0x1007,0,pvParam_00411554,3);
    if (BVar5 == 0) {
      pvParam_00411554 = DAT_004114f4;
    }
    else {
      iVar6 = 1;
    }
  }
  local_c = DAT_00411558;
  local_10 = 8;
  BVar5 = SystemParametersInfoW(0x49,8,&local_10,0);
  if (BVar5 == 0) {
    DAT_00411558 = DAT_004114f8;
  }
  else {
    iVar6 = 1;
  }
  if (pvParam_0041155c != DAT_004114fc) {
    BVar5 = SystemParametersInfoW(0x25,(UINT)pvParam_0041155c,(PVOID)0x0,3);
    if (BVar5 == 0) {
      pvParam_0041155c = DAT_004114fc;
    }
    else {
      iVar6 = 1;
    }
  }
  if (bEnable_00411560 != DAT_00411500) {
    BVar5 = SystemParametersInfoW(0x4b,(UINT)bEnable_00411560,(PVOID)0x0,3);
    if (BVar5 == 0) {
      bEnable_00411560 = DAT_00411500;
    }
    else {
      iVar6 = 1;
    }
  }
  if (((bEnable_00411560 != (PVOID)0x0) && (pvParam_00411564 != (PVOID)0x0)) &&
     (pvParam_00411564 != DAT_00411504)) {
    BVar5 = SystemParametersInfoW(0x200b,0,pvParam_00411564,3);
    if (BVar5 == 0) {
      pvParam_00411564 = DAT_00411504;
    }
    else {
      iVar6 = 1;
    }
  }
  if (pvParam_00411568 != DAT_00411508) {
    BVar5 = SystemParametersInfoW(0x100b,0,pvParam_00411568,3);
    if (BVar5 == 0) {
      pvParam_00411568 = DAT_00411508;
    }
    else {
      iVar6 = 1;
    }
  }
  if (pvParam_0041156c != DAT_0041150c) {
    BVar5 = SystemParametersInfoW(0x1c,(UINT)pvParam_0041156c,(PVOID)0x0,3);
    if (BVar5 == 0) {
      pvParam_0041156c = DAT_0041150c;
    }
    else {
      iVar6 = 1;
    }
  }
  uVar2 = DAT_00411570;
  if (DAT_00411570 != DAT_00411510) {
    local_14 = 0xc;
    BVar5 = SystemParametersInfoW(0x42,0xc,&local_14,0);
    if (BVar5 != 0) {
      if (uVar2 == (local_10 & 1)) {
        DAT_004114c0 = dwInitParam_00411520;
        DAT_004114c4 = pvParam_00411524;
        DAT_004114c8 = pvParam_00411528;
        DAT_004114cc = lpData_0041152c;
        DAT_004114d0 = bEnable_00411530;
        DAT_004114d4 = pvParam_00411534;
        DAT_004114d8 = pvParam_00411538;
        DAT_004114dc = pvParam_0041153c;
        DAT_004114e0 = pvParam_00411540;
        DAT_004114e4 = pvParam_00411544;
        DAT_004114e8 = pvParam_00411548;
        DAT_004114ec = pvParam_0041154c;
        DAT_004114f0 = pvParam_00411550;
        DAT_004114f4 = pvParam_00411554;
        DAT_004114f8 = DAT_00411558;
        DAT_004114fc = pvParam_0041155c;
        DAT_00411500 = bEnable_00411560;
        DAT_00411504 = pvParam_00411564;
        DAT_00411508 = pvParam_00411568;
        DAT_0041150c = pvParam_0041156c;
        DAT_00411510 = DAT_00411570;
        return 1;
      }
      if (uVar2 == 0) {
        local_10 = local_10 & 0xfffffffe;
      }
      else {
        local_10 = local_10 | 1;
      }
      local_10 = local_10 | 0x1000;
      BVar5 = SystemParametersInfoW(0x43,0xc,&local_14,3);
      if (BVar5 != 0) {
        DAT_004114c0 = dwInitParam_00411520;
        DAT_004114c4 = pvParam_00411524;
        DAT_004114c8 = pvParam_00411528;
        DAT_004114cc = lpData_0041152c;
        DAT_004114d0 = bEnable_00411530;
        DAT_004114d4 = pvParam_00411534;
        DAT_004114d8 = pvParam_00411538;
        DAT_004114dc = pvParam_0041153c;
        DAT_004114e0 = pvParam_00411540;
        DAT_004114e4 = pvParam_00411544;
        DAT_004114e8 = pvParam_00411548;
        DAT_004114ec = pvParam_0041154c;
        DAT_004114f0 = pvParam_00411550;
        DAT_004114f4 = pvParam_00411554;
        DAT_004114f8 = DAT_00411558;
        DAT_004114fc = pvParam_0041155c;
        DAT_00411500 = bEnable_00411560;
        DAT_00411504 = pvParam_00411564;
        DAT_00411508 = pvParam_00411568;
        DAT_0041150c = pvParam_0041156c;
        DAT_00411510 = DAT_00411570;
        return 1;
      }
    }
    DAT_00411570 = DAT_00411510;
  }
  if (iVar6 == 0) {
    return 0;
  }
  DAT_00411510 = DAT_00411570;
  DAT_0041150c = pvParam_0041156c;
  DAT_00411508 = pvParam_00411568;
  DAT_00411504 = pvParam_00411564;
  DAT_00411500 = bEnable_00411560;
  DAT_004114fc = pvParam_0041155c;
  DAT_004114f8 = DAT_00411558;
  DAT_004114f4 = pvParam_00411554;
  DAT_004114f0 = pvParam_00411550;
  DAT_004114ec = pvParam_0041154c;
  DAT_004114e8 = pvParam_00411548;
  DAT_004114e4 = pvParam_00411544;
  DAT_004114e0 = pvParam_00411540;
  DAT_004114dc = pvParam_0041153c;
  DAT_004114d8 = pvParam_00411538;
  DAT_004114d4 = pvParam_00411534;
  DAT_004114d0 = bEnable_00411530;
  DAT_004114cc = lpData_0041152c;
  DAT_004114c8 = pvParam_00411528;
  DAT_004114c4 = pvParam_00411524;
  DAT_004114c0 = dwInitParam_00411520;
  return iVar6;
}



void FUN_00404960(void)

{
  LSTATUS LVar1;
  BOOL BVar2;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  DWORD local_18;
  PVOID local_14;
  HKEY local_10;
  LPARAM local_c;
  PVOID local_8;
  
  LVar1 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Desktop\\WindowMetrics",0,1,&local_10);
  if (LVar1 == 0) {
    local_18 = 6;
    LVar1 = FUN_00401290(local_10,L"Shell Icon Size",(LPCWSTR)&local_20,&local_18);
    if (LVar1 == 0) {
      dwInitParam_00411520 = FUN_00401160((ushort *)&local_20,(undefined4 *)0x0);
      RegCloseKey(local_10);
      goto LAB_004049cc;
    }
  }
  dwInitParam_00411520 = 0x20;
LAB_004049cc:
  BVar2 = SystemParametersInfoW(0xd,0,&local_c,0);
  if (BVar2 == 0) {
    local_c = 0x2b;
  }
  pvParam_00411524 = local_c;
  BVar2 = SystemParametersInfoW(0x18,0,&local_c,0);
  if (BVar2 == 0) {
    local_c = 0x2b;
  }
  pvParam_00411528 = local_c - dwInitParam_00411520;
  pvParam_00411524 = pvParam_00411524 - dwInitParam_00411520;
  lpData_0041152c = (BYTE *)0x1;
  LVar1 = RegOpenKeyExW((HKEY)0x80000001,
                        L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",0,1,
                        &local_10);
  if (LVar1 == 0) {
    lpData_0041152c = (BYTE *)FUN_004011c0(local_10,L"ListviewShadow",1);
    RegCloseKey(local_10);
  }
  BVar2 = SystemParametersInfoW(0x103e,0,&local_8,0);
  if (BVar2 == 0) {
    local_8 = (PVOID)0x1;
  }
  bEnable_00411530 = local_8;
  BVar2 = SystemParametersInfoW(0x1024,0,&local_8,0);
  if (BVar2 == 0) {
    local_8 = (PVOID)0x1;
  }
  pvParam_00411534 = local_8;
  BVar2 = SystemParametersInfoW(0x101a,0,&local_8,0);
  if (BVar2 == 0) {
    local_8 = (PVOID)0x1;
  }
  pvParam_00411538 = local_8;
  BVar2 = SystemParametersInfoW(0x1002,0,&local_8,0);
  if (BVar2 == 0) {
    local_8 = (PVOID)0x1;
  }
  pvParam_0041153c = local_8;
  BVar2 = SystemParametersInfoW(0x1012,0,&local_8,0);
  if (BVar2 == 0) {
    local_8 = (PVOID)0x1;
  }
  pvParam_00411540 = local_8;
  BVar2 = SystemParametersInfoW(0x1014,0,&local_8,0);
  if (BVar2 == 0) {
    local_8 = (PVOID)0x1;
  }
  pvParam_00411544 = local_8;
  BVar2 = SystemParametersInfoW(0x1016,0,&local_8,0);
  if (BVar2 == 0) {
    local_8 = (PVOID)0x1;
  }
  pvParam_00411548 = local_8;
  BVar2 = SystemParametersInfoW(0x1018,0,&local_8,0);
  if (BVar2 == 0) {
    local_8 = (PVOID)0x1;
  }
  pvParam_0041154c = local_8;
  BVar2 = SystemParametersInfoW(0x1004,0,&local_8,0);
  if (BVar2 == 0) {
    local_8 = (PVOID)0x1;
  }
  pvParam_00411550 = local_8;
  BVar2 = SystemParametersInfoW(0x1006,0,&local_8,0);
  if (BVar2 == 0) {
    local_8 = (PVOID)0x1;
  }
  local_20 = 8;
  pvParam_00411554 = local_8;
  BVar2 = SystemParametersInfoW(0x48,8,&local_20,0);
  if (BVar2 == 0) {
    DAT_00411558 = 1;
  }
  else {
    DAT_00411558 = (uint)(local_1c != 0);
  }
  BVar2 = SystemParametersInfoW(0x26,0,&local_8,0);
  if (BVar2 == 0) {
    local_8 = (PVOID)0x1;
  }
  pvParam_0041155c = local_8;
  BVar2 = SystemParametersInfoW(0x4a,0,&local_8,0);
  if (BVar2 == 0) {
    local_8 = (PVOID)0x1;
  }
  bEnable_00411560 = local_8;
  BVar2 = SystemParametersInfoW(0x200a,0,&local_14,0);
  if (BVar2 == 0) {
    local_14 = (PVOID)0x2;
  }
  pvParam_00411564 = local_14;
  BVar2 = SystemParametersInfoW(0x100a,0,&local_8,0);
  if (BVar2 == 0) {
    local_8 = (PVOID)0x0;
  }
  pvParam_00411568 = local_8;
  BVar2 = SystemParametersInfoW(0x1b,0,&local_8,0);
  if (BVar2 == 0) {
    local_8 = (PVOID)0x0;
  }
  local_24 = 0xc;
  pvParam_0041156c = local_8;
  BVar2 = SystemParametersInfoW(0x42,0xc,&local_24,0);
  if (BVar2 == 0) {
    DAT_00411570 = 0;
  }
  else {
    DAT_00411570 = local_20 & 1;
  }
  DAT_00411510 = DAT_00411570;
  DAT_004114c0 = dwInitParam_00411520;
  DAT_004114c4 = pvParam_00411524;
  DAT_004114c8 = pvParam_00411528;
  DAT_004114cc = lpData_0041152c;
  DAT_004114d0 = bEnable_00411530;
  DAT_004114d4 = pvParam_00411534;
  DAT_004114d8 = pvParam_00411538;
  DAT_004114dc = pvParam_0041153c;
  DAT_004114e0 = pvParam_00411540;
  DAT_004114e4 = pvParam_00411544;
  DAT_004114e8 = pvParam_00411548;
  DAT_004114ec = pvParam_0041154c;
  DAT_004114f0 = pvParam_00411550;
  DAT_004114f4 = pvParam_00411554;
  DAT_004114f8 = DAT_00411558;
  DAT_004114fc = pvParam_0041155c;
  DAT_00411500 = bEnable_00411560;
  DAT_00411504 = pvParam_00411564;
  DAT_00411508 = pvParam_00411568;
  DAT_0041150c = pvParam_0041156c;
  return;
}



void FUN_00404d30(void)

{
  DAT_00411570 = 0;
  dwInitParam_00411520 = 0x20;
  pvParam_00411524 = 0x2b;
  pvParam_00411528 = 0x2b;
  lpData_0041152c = (BYTE *)0x1;
  bEnable_00411530 = (PVOID)0x1;
  pvParam_00411534 = (PVOID)0x1;
  pvParam_00411538 = (PVOID)0x1;
  pvParam_0041153c = (PVOID)0x1;
  pvParam_00411540 = (PVOID)0x1;
  pvParam_00411544 = (PVOID)0x1;
  pvParam_00411548 = (PVOID)0x1;
  pvParam_0041154c = (PVOID)0x1;
  pvParam_00411550 = (PVOID)0x1;
  pvParam_00411554 = (PVOID)0x1;
  DAT_00411558 = 1;
  pvParam_0041155c = (PVOID)0x1;
  bEnable_00411560 = (PVOID)0x1;
  pvParam_00411564 = (PVOID)0x2;
  pvParam_00411568 = (PVOID)0x0;
  pvParam_0041156c = (PVOID)0x0;
  return;
}



undefined4 FUN_00404d90(void)

{
  LSTATUS LVar1;
  HKEY local_8;
  
  LVar1 = RegOpenKeyExW((HKEY)0x80000001,
                        L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",0,1,
                        &local_8);
  if (LVar1 != 0) {
    return 0;
  }
  lpData_0041152c = (BYTE *)FUN_004011c0(local_8,L"ListviewShadow",1);
  RegCloseKey(local_8);
  return 1;
}



undefined4 FUN_00404de0(void)

{
  BOOL BVar1;
  undefined4 local_10;
  uint local_c;
  
  local_10 = 0xc;
  BVar1 = SystemParametersInfoW(0x42,0xc,&local_10,0);
  if (BVar1 == 0) {
    return 0;
  }
  DAT_00411570 = local_c & 1;
  return 1;
}



undefined4 FUN_00404e20(void)

{
  LSTATUS LVar1;
  WCHAR local_14 [4];
  DWORD local_c;
  HKEY local_8;
  
  LVar1 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Desktop\\WindowMetrics",0,1,&local_8);
  if (LVar1 == 0) {
    local_c = 6;
    LVar1 = FUN_00401290(local_8,L"Shell Icon Size",local_14,&local_c);
    if (LVar1 == 0) {
      dwInitParam_00411520 = FUN_00401160((ushort *)local_14,(undefined4 *)0x0);
      RegCloseKey(local_8);
      return 1;
    }
  }
  return 0;
}



uint FUN_00404e90(HDC param_1,int *param_2,int param_3,HGDIOBJ param_4)

{
  int y;
  int iVar1;
  HGDIOBJ h;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int h_00;
  
  iVar3 = *param_2;
  y = param_2[1];
  iVar7 = param_2[2];
  iVar1 = param_2[3];
  h = SelectObject(param_1,param_4);
  if (h == (HGDIOBJ)0x0) {
    return 0;
  }
  h_00 = iVar1 - y;
  uVar2 = PatBlt(param_1,iVar3,y,param_3,h_00,0xf00021);
  iVar3 = iVar3 + param_3;
  uVar4 = PatBlt(param_1,iVar7 - param_3,y,param_3,h_00,0xf00021);
  iVar7 = (iVar7 - param_3) - iVar3;
  uVar5 = PatBlt(param_1,iVar3,y,iVar7,param_3,0xf00021);
  uVar6 = PatBlt(param_1,iVar3,iVar1 - param_3,iVar7,param_3,0xf00021);
  SelectObject(param_1,h);
  return uVar6 & uVar5 & uVar4 & uVar2 & 1;
}



int __cdecl FUN_00404f60(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_2 = param_1 - 0x10;
  if (3 < (int)(param_1 - 0x10)) {
    return 0x10;
  }
  iVar1 = (param_1 & 1) + 4;
  iVar2 = param_1 - iVar1;
  if (0 < iVar2) {
    *param_2 = iVar1;
    return iVar2;
  }
  *param_2 = 0;
  return 0;
}



uint FUN_00404fa0(undefined4 param_1,HDC param_2,uint *param_3,HGDIOBJ param_4,HICON param_5,
                 LPCWSTR param_6,HGDIOBJ param_7)

{
  HICON hIcon;
  int iVar1;
  int iVar2;
  BOOL BVar3;
  COLORREF CVar4;
  uint uVar5;
  uint uVar6;
  _TRIVERTEX local_40;
  RECT local_30;
  RECT local_20;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  hIcon = param_5;
  local_20.left = *param_3;
  local_20.top = param_3[1];
  local_20.right = param_3[2];
  local_20.bottom = param_3[3];
  local_8 = (uint)param_7 & 1;
  uVar6 = local_8 ^ 1;
  if (param_5 != (HICON)0x0) {
    iVar1 = FUN_00404f60(local_20.bottom - local_20.top,(int *)&param_5);
    local_c = (int)param_5 >> 1;
    local_30.top = local_20.top;
    local_30.bottom = local_20.bottom;
    local_30.right = (int)&param_5->unused + local_20.left + iVar1;
    local_30.left = local_20.left;
    iVar2 = FillRect(param_2,&local_30,*(HBRUSH *)(DAT_00411424 + 8 + uVar6 * 4));
    if (iVar2 == 0) {
      local_20.left = local_30.left;
    }
    else {
      BVar3 = DrawIconEx(param_2,local_20.left + local_c + 1,local_20.top + local_c,hIcon,iVar1,
                         iVar1,0,(HBRUSH)0x0,3);
      local_20.left = local_30.right;
      if (BVar3 == 0) {
        local_20.left = local_30.left;
      }
    }
  }
  if (((uint)param_7 & 0x20) == 0) {
    iVar1 = FillRect(param_2,&local_20,*(HBRUSH *)(DAT_00411424 + 8 + uVar6 * 4));
    uVar6 = (uint)(iVar1 != 0);
  }
  else {
    local_10 = 0;
    local_c = 1;
    uVar6 = *(uint *)(DAT_00411420 + 8 + uVar6 * 4);
    if (local_8 == 0) {
      uVar5 = *(uint *)(DAT_00411420 + 0x70);
    }
    else {
      uVar5 = *(uint *)(DAT_00411420 + 0x6c);
    }
    local_40.y = local_20.top;
    local_40.Green = (ushort)uVar6 & 0xff00;
    local_40.Red = (COLOR16)((uVar6 & 0xffff) << 8);
    local_40.Blue = (ushort)(uVar6 >> 8) & 0xff00;
    local_40.Alpha = 0;
    local_30.left = local_20.right;
    local_30.top = local_20.bottom;
    local_30.right = CONCAT22((short)uVar5,(short)(uVar5 << 8)) & 0xff00ffff;
    local_30.bottom = uVar5 >> 8 & 0xff00;
    local_40.x = local_20.left;
    uVar6 = GdiGradientFill(param_2,&local_40,2,&local_10,1,0);
  }
  param_7 = SelectObject(param_2,param_4);
  if (param_7 != (HGDIOBJ)0x0) {
    if (local_8 == 0) {
      CVar4 = *(COLORREF *)(DAT_00411420 + 0x4c);
    }
    else {
      CVar4 = *(COLORREF *)(DAT_00411420 + 0x24);
    }
    CVar4 = SetTextColor(param_2,CVar4);
    local_20.left = local_20.left + 2;
    iVar1 = DrawTextW(param_2,param_6,-1,&local_20,0x40024);
    SelectObject(param_2,param_7);
    uVar5 = 0;
    if (0 < iVar1) {
      uVar5 = uVar6 & CVar4 != 0xffffffff;
    }
    return uVar5;
  }
  return 0;
}



bool __cdecl
FUN_004051a0(undefined4 param_1,HDC param_2,LONG *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  RECT local_24;
  LONG local_14;
  LONG LStack_10;
  LONG LStack_c;
  int iStack_8;
  
  local_14 = *param_3;
  LStack_10 = param_3[1];
  LStack_c = param_3[2];
  iStack_8 = param_3[3];
  iVar1 = (*DAT_00411430)(param_1,param_2,&local_14,param_4,param_5);
  local_24.top = iStack_8 + -1;
  local_24.left = local_14;
  local_24.bottom = iStack_8;
  local_24.right = LStack_c;
  iStack_8 = local_24.top;
  iVar2 = FillRect(param_2,&local_24,*(HBRUSH *)(DAT_00411424 + 0x3c));
  return iVar2 != 0 && iVar1 == 0;
}



uint __cdecl
FUN_00405210(HDC param_1,LONG *param_2,LPCWSTR param_3,HGDIOBJ param_4,COLORREF param_5)

{
  uint uVar1;
  COLORREF CVar2;
  HGDIOBJ h;
  int iVar3;
  tagRECT local_14;
  
  local_14.left = *param_2;
  local_14.top = param_2[1];
  local_14.right = param_2[2];
  local_14.bottom = param_2[3];
  uVar1 = DrawFrameControl(param_1,&local_14,4,0x10);
  CVar2 = SetTextColor(param_1,param_5);
  h = SelectObject(param_1,param_4);
  local_14.bottom = local_14.bottom + -1;
  iVar3 = DrawTextW(param_1,param_3,-1,&local_14,0x40025);
  if (h != (HGDIOBJ)0x0) {
    SelectObject(param_1,h);
  }
  return uVar1 & (0 < iVar3 && CVar2 != 0xffffffff);
}



uint __cdecl FUN_004052a0(HDC param_1,LONG *param_2,int param_3,HBRUSH param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  COLORREF CVar3;
  int iVar4;
  tagRECT local_1c;
  int local_c;
  uint local_8;
  
  uVar1 = 0x100;
  if (param_5 != 0) {
    uVar1 = 0;
  }
  local_1c.left = *param_2;
  local_1c.right = param_2[2];
  local_1c.top = param_2[1];
  local_8 = 1;
  if ((param_2[3] - local_1c.top) + param_3 * -2 < 1) {
    param_3 = param_2[3] - local_1c.top >> 1;
  }
  local_c = local_1c.top;
  if (param_3 < 5) {
    param_3 = 0;
  }
  else {
    local_1c.bottom = local_1c.top + param_3;
    uVar2 = DrawFrameControl(param_1,&local_1c,3,uVar1);
    local_1c.bottom = param_2[3];
    local_1c.top = local_1c.bottom - param_3;
    uVar1 = DrawFrameControl(param_1,&local_1c,3,uVar1 | 1);
    local_8 = uVar1 & uVar2 & 1;
  }
  local_1c.top = param_2[1] + param_3;
  local_1c.bottom = param_2[3] - param_3;
  if (local_1c.top < local_1c.bottom) {
    if (param_4 != (HBRUSH)0x0) {
      if ((*DAT_00411420 != DAT_00411420[0x14]) || (DAT_00411420[5] == *DAT_00411420)) {
        CVar3 = SetTextColor(param_1,DAT_00411420[0xf]);
        uVar1 = 0;
        if (CVar3 != 0xffffffff) {
          uVar1 = local_8;
        }
        CVar3 = SetBkColor(param_1,DAT_00411420[0x14]);
        if (CVar3 == 0xffffffff) {
          FillRect(param_1,&local_1c,(HBRUSH)*DAT_00411424);
          return 0;
        }
        iVar4 = FillRect(param_1,&local_1c,param_4);
        SetBkColor(param_1,CVar3);
        return uVar1 & iVar4 != 0;
      }
    }
    iVar4 = FillRect(param_1,&local_1c,(HBRUSH)*DAT_00411424);
    local_8 = -(uint)(iVar4 != 0) & local_8;
  }
  return local_8;
}



byte __cdecl FUN_00405410(HDC param_1,int *param_2,HGDIOBJ param_3,LPCWSTR param_4)

{
  byte bVar1;
  int iVar2;
  BOOL BVar3;
  COLORREF CVar4;
  int iVar5;
  tagSIZE *psizl;
  tagRECT local_20;
  tagSIZE local_10;
  HGDIOBJ local_8;
  
  local_8 = SelectObject(param_1,param_3);
  psizl = &local_10;
  iVar2 = lstrlenW(param_4);
  BVar3 = GetTextExtentPoint32W(param_1,param_4,iVar2,psizl);
  if (BVar3 == 0) {
    local_10.cx = MulDiv(0x2d,nNumerator_004114ac,0x60);
    local_10.cy = MulDiv(0xe,nNumerator_004114ac,0x60);
  }
  param_2[1] = (param_2[3] - local_10.cy) + -4;
  param_2[2] = local_10.cx + 4 + *param_2;
  local_20.left = *param_2;
  local_20.top = param_2[1];
  local_20.right = param_2[2];
  local_20.bottom = param_2[3];
  bVar1 = FUN_00404e90(param_1,&local_20,1,*(undefined4 *)(DAT_00411424 + 0x5c));
  InflateRect(&local_20,-1,-1);
  iVar2 = FillRect(param_1,&local_20,*(HBRUSH *)(DAT_00411424 + 0x60));
  InflateRect(&local_20,-1,-1);
  CVar4 = SetTextColor(param_1,*(COLORREF *)(DAT_00411420 + 0x5c));
  iVar5 = DrawTextW(param_1,param_4,-1,&local_20,0x40020);
  if (local_8 != (HGDIOBJ)0x0) {
    SelectObject(param_1,local_8);
  }
  return bVar1 & (CVar4 != 0xffffffff && (0 < iVar5 && iVar2 != 0));
}



uint __cdecl
FUN_00405540(HDC param_1,int *param_2,int param_3,int param_4,int param_5,uint param_6,int param_7,
            undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  tagRECT local_30;
  RECT local_20;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_30.left = *param_2;
  local_30.top = param_2[1];
  local_30.right = param_2[2];
  local_30.bottom = param_2[3];
  local_10 = param_6 & 1;
  uVar1 = DrawEdge(param_1,&local_30,5,0x200f);
  uVar1 = uVar1 & 1;
  uVar8 = param_6 & 1 ^ 1;
  if (0 < param_3) {
    uVar2 = FUN_00404e90(param_1,&local_30,param_3,*(undefined4 *)(DAT_00411424 + 0x28 + uVar8 * 4))
    ;
    uVar3 = InflateRect(&local_30,1 - param_3,1 - param_3);
    uVar1 = uVar1 & uVar2 & uVar3;
  }
  local_c = FUN_00404e90(param_1,&local_30,1,*(undefined4 *)(DAT_00411424 + 0x3c));
  local_c = local_c & uVar1;
  local_8 = param_5;
  if (param_7 != 0) {
    local_8 = param_5 * 3;
  }
  if (param_7 == 0) {
    param_3 = param_3 + 1;
  }
  iVar7 = param_3 + 2;
  local_20.top = param_2[1] + iVar7;
  local_20.bottom = param_4 + local_20.top;
  local_20.left = *param_2 + iVar7;
  local_20.right = ((param_2[2] - local_8) - iVar7) + -2;
  uVar4 = 0;
  if ((param_6 & 4) != 0) {
    uVar4 = param_8;
  }
  uVar1 = FUN_00404fa0(0,param_1,&local_20,param_9,uVar4,param_10,param_6);
  uVar1 = uVar1 & local_c;
  local_30.right = param_2[2] - iVar7;
  local_30.top = local_20.bottom;
  local_30.bottom = local_20.bottom + 1;
  local_30.left = local_20.left;
  local_20.right = local_30.right;
  iVar7 = FillRect(param_1,&local_30,*(HBRUSH *)(DAT_00411424 + 0x3c));
  local_20.left = (local_20.right - local_8) + -2;
  iVar5 = param_5 + -2;
  if ((param_6 & 0x20) == 0) {
    iVar6 = (uint)(local_10 == 0) * 4 + 8;
  }
  else {
    iVar6 = uVar8 * 4 + 0x6c;
  }
  iVar6 = FillRect(param_1,&local_20,*(HBRUSH *)(iVar6 + DAT_00411424));
  local_30.top = local_20.top + 2;
  local_30.bottom = local_20.bottom + -2;
  local_30.right = local_20.right + -2;
  local_30.left = local_30.right - iVar5;
  uVar8 = DrawFrameControl(param_1,&local_30,1,0);
  uVar8 = uVar8 & iVar6 != 0;
  if (param_7 != 0) {
    local_30.right = local_30.left + -2;
    local_30.left = local_30.right - iVar5;
    uVar2 = DrawFrameControl(param_1,&local_30,1,2);
    local_30.right = local_30.left;
    local_30.left = local_30.left - iVar5;
    uVar3 = DrawFrameControl(param_1,&local_30,1,1);
    uVar8 = uVar8 & uVar2 & uVar3;
  }
  return uVar8 & -(uint)(iVar7 != 0) & uVar1;
}



undefined4 FUN_00405750(void)

{
  hLibModule_0041142c = LoadLibraryW(L"user32.dll");
  if (hLibModule_0041142c != (HMODULE)0x0) {
    DAT_0041141c = GetProcAddress(hLibModule_0041142c,"SetSysColorsTemp");
    if (DAT_0041141c != (FARPROC)0x0) {
      DAT_00411430 = GetProcAddress(hLibModule_0041142c,"DrawMenuBarTemp");
      if (DAT_00411430 != (FARPROC)0x0) {
        return 1;
      }
    }
    FreeLibrary(hLibModule_0041142c);
    hLibModule_0041142c = (HMODULE)0x0;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_004057c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_00411420 = param_1;
  DAT_00411424 = param_2;
  _DAT_00411428 = param_3;
  return;
}



void FUN_004057e0(void)

{
  FreeLibrary(hLibModule_0041142c);
  hLibModule_0041142c = (HMODULE)0x0;
  return;
}



void __cdecl FUN_00405800(LPRECT param_1,LONG *param_2,int param_3)

{
  if (param_2[3] < param_3) {
    SetRectEmpty(param_1);
    return;
  }
  param_1->top = param_3;
  param_1->left = *param_2;
  param_1->right = param_2[2];
  param_1->bottom = param_2[3];
  return;
}



void __cdecl FUN_00405840(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00405b50(param_1);
  if (0 < *(int *)(param_1 + 0x3cc)) {
    iVar2 = *(int *)(param_1 + 0x3c4) + 2;
    *(int *)(param_1 + 0x3e4) = iVar2;
    iVar1 = *(int *)(param_1 + 0x3cc) + -2;
    *(int *)(param_1 + 0x3ec) = iVar1;
    if (iVar2 <= iVar1) {
      iVar1 = *(int *)(param_1 + 0x3c8) + -2;
      *(int *)(param_1 + 1000) = iVar1;
      ((LPRECT)(param_1 + 0x3e0))->left = iVar1 - *(int *)(param_1 + 0x4b4);
      FUN_004058c0(param_1);
      return;
    }
  }
  SetRectEmpty((LPRECT)(param_1 + 0x3e0));
  FUN_004058c0(param_1);
  return;
}



void __cdecl FUN_004058c0(int param_1)

{
  LPRECT ptVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  tagRECT local_1c;
  int local_c;
  int local_8;
  
  iVar4 = *(int *)(param_1 + 0x36c);
  iVar2 = MulDiv(4,nNumerator_004114ac,0x60);
  ptVar1 = (LPRECT)(param_1 + 0x3f0);
  *(int *)(param_1 + 0x3fc) = iVar4 - iVar2;
  if (*(int *)(param_1 + 0x494) == 0) {
    iVar4 = *(int *)(param_1 + 0x3a0);
    ptVar1->left = iVar4;
    iVar3 = MulDiv(0x9d,nNumerator_004114ac,0x60);
    iVar2 = *(int *)(param_1 + 0x3fc);
    ptVar1->left = iVar3 + iVar4;
    iVar4 = MulDiv(0x4a,nNumerator_004114ac,0x60);
    local_c = ptVar1->left;
    *(int *)(param_1 + 0x3f4) = iVar2 - iVar4;
    iVar4 = MulDiv(0x82,nNumerator_004114ac,0x60);
    iVar4 = local_c + iVar4;
    local_1c.left = local_c;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x3c0);
    local_1c.left = MulDiv(4,nNumerator_004114ac,0x60);
    iVar2 = *(int *)(param_1 + 0x3c8);
    local_1c.left = local_1c.left + iVar4;
    *(int *)(param_1 + 0x3f4) = *(int *)(param_1 + 0x3cc) + *(int *)(param_1 + 0x3c4) >> 1;
    iVar3 = *(int *)(param_1 + 0x4a4);
    ptVar1->left = local_1c.left;
    iVar4 = (iVar2 + iVar4 >> 1) + iVar3 * 3;
  }
  *(int *)(param_1 + 0x3f8) = iVar4;
  pcVar5 = SetRectEmpty_exref;
  if (*(int *)(param_1 + 0x3fc) < 1) {
    SetRectEmpty(ptVar1);
    SetRectEmpty((LPRECT)(param_1 + 0x400));
    SetRectEmpty((LPRECT)(param_1 + 0x410));
    SetRectEmpty((LPRECT)(param_1 + 0x420));
    return;
  }
  local_1c.left = local_1c.left + 3;
  local_1c.top = *(int *)(param_1 + 0x3f4) + 3;
  local_1c.bottom = *(int *)(param_1 + 0x3fc) + -3;
  local_1c.right = *(int *)(param_1 + 0x3f8) + -3;
  if ((local_1c.bottom <= local_1c.top) || (local_1c.right <= local_1c.left)) {
    SetRectEmpty(&local_1c);
  }
  iVar4 = *(int *)((uint)(*(int *)(param_1 + 0x494) == 0) * 8 + 0x4a4 + param_1) + local_1c.top;
  *(LONG *)(param_1 + 0x404) = local_1c.top;
  ((LPRECT)(param_1 + 0x400))->left = local_1c.left;
  *(LONG *)(param_1 + 0x408) = local_1c.right;
  *(int *)(param_1 + 0x40c) = iVar4;
  if (iVar4 <= local_1c.top) {
    SetRectEmpty((LPRECT)(param_1 + 0x400));
  }
  ptVar1 = (LPRECT)(param_1 + 0x410);
  if (*(int *)(param_1 + 0x40c) <= local_1c.bottom) {
    iVar4 = *(int *)(param_1 + 0x40c) + 1;
    *(LONG *)(param_1 + 0x41c) = local_1c.bottom;
    pcVar5 = SetRectEmpty_exref;
    ptVar1->left = local_1c.left;
    *(int *)(param_1 + 0x414) = iVar4;
    *(LONG *)(param_1 + 0x418) = local_1c.right;
    if (local_1c.bottom < iVar4) {
      SetRectEmpty(ptVar1);
    }
    else {
      ptVar1->left = local_1c.left;
      *(LONG *)(param_1 + 0x418) = local_1c.right;
      *(LONG *)(param_1 + 0x41c) = local_1c.bottom;
    }
    if (*(int *)(param_1 + 0x414) < *(int *)(param_1 + 0x41c)) {
      if (*(int *)(param_1 + 0x494) == 0) {
        local_c = MulDiv(0x4b,nNumerator_004114ac,0x60);
        iVar4 = 0x15;
      }
      else {
        local_c = MulDiv(0x48,nNumerator_004114ac,0x60);
        iVar4 = 0x18;
      }
      local_8 = MulDiv(iVar4,nNumerator_004114ac,0x60);
      iVar4 = *(int *)(param_1 + 0x41c);
      iVar2 = MulDiv(3,nNumerator_004114ac,0x60);
      iVar4 = iVar4 - iVar2;
      *(int *)(param_1 + 0x42c) = iVar4;
      iVar4 = iVar4 - local_8;
      *(int *)(param_1 + 0x424) = iVar4;
      if (*(int *)(param_1 + 0x404) <= iVar4) {
        iVar4 = (*(int *)(param_1 + 0x418) - local_c) + ptVar1->left >> 1;
        *(int *)(param_1 + 0x420) = iVar4;
        *(int *)(param_1 + 0x428) = iVar4 + local_c;
        return;
      }
      FUN_00407720(param_1);
      return;
    }
  }
  (*pcVar5)(param_1 + 0x3f0);
  (*pcVar5)(param_1 + 0x400);
  (*pcVar5)(ptVar1);
  (*pcVar5)(param_1 + 0x420);
  return;
}



void __cdecl FUN_00405b50(int param_1)

{
  LPRECT lprc;
  int iVar1;
  int iVar2;
  int iVar3;
  tagRECT local_2c;
  tagRECT local_1c;
  int local_c;
  int local_8;
  
  iVar3 = *(int *)(param_1 + 0x360);
  local_8 = *(int *)(param_1 + 0x49c) + 3;
  iVar1 = MulDiv(8,nNumerator_004114ac,0x60);
  iVar2 = *(int *)(param_1 + 0x364);
  *(int *)(param_1 + 0x380) = iVar1 + iVar3;
  iVar1 = MulDiv(8,nNumerator_004114ac,0x60);
  iVar3 = *(int *)(param_1 + 0x368);
  *(int *)(param_1 + 900) = iVar1 + iVar2;
  iVar2 = MulDiv(0x1a,nNumerator_004114ac,0x60);
  *(int *)(param_1 + 0x388) = iVar3 - iVar2;
  iVar3 = *(int *)(param_1 + 0x36c);
  iVar2 = MulDiv(0x1e,nNumerator_004114ac,0x60);
  *(int *)(param_1 + 0x38c) = iVar3 - iVar2;
  iVar3 = *(int *)(param_1 + 0x368);
  iVar2 = MulDiv(4,nNumerator_004114ac,0x60);
  *(int *)(param_1 + 0x3a8) = iVar3 - iVar2;
  iVar3 = *(int *)(param_1 + 0x36c);
  iVar2 = MulDiv(0x19,nNumerator_004114ac,0x60);
  *(int *)(param_1 + 0x3ac) = iVar3 - iVar2;
  local_2c.top = *(int *)(param_1 + 900) + local_8;
  local_2c.bottom = *(int *)(param_1 + 0x38c) - local_8;
  local_2c.left = *(int *)(param_1 + 0x380) + local_8;
  local_2c.right = *(int *)(param_1 + 0x388) - local_8;
  if ((local_2c.bottom <= local_2c.top) || (local_2c.right <= local_2c.left)) {
    local_c = local_2c.right;
    SetRectEmpty(&local_2c);
  }
  lprc = (LPRECT)(param_1 + 0x390);
  iVar3 = *(int *)(param_1 + 0x4a4) + local_2c.top;
  *(LONG *)(param_1 + 0x394) = local_2c.top;
  *(LONG *)(param_1 + 0x398) = local_2c.right;
  lprc->left = local_2c.left;
  *(int *)(param_1 + 0x39c) = iVar3;
  local_c = local_2c.right;
  if (iVar3 <= local_2c.top) {
    SetRectEmpty(lprc);
  }
  if ((local_2c.bottom < 1) || (local_2c.bottom < *(int *)(param_1 + 0x39c))) {
    SetRectEmpty((LPRECT)(param_1 + 0x380));
    SetRectEmpty(lprc);
  }
  else {
    local_1c.top = *(int *)(param_1 + 0x39c) + 1;
    *(LONG *)(param_1 + 0x3a0) = local_2c.left;
    *(LONG *)(param_1 + 0x3a4) = local_1c.top;
    local_1c.top = local_1c.top + local_8;
    local_1c.left = local_2c.left + local_8;
    local_1c.right = *(int *)(param_1 + 0x3a8) - local_8;
    local_1c.bottom = *(int *)(param_1 + 0x3ac) - local_8;
    if ((local_1c.bottom <= local_1c.top) || (local_1c.right <= local_1c.left)) {
      SetRectEmpty(&local_1c);
    }
    *(LONG *)(param_1 + 0x3b4) = local_1c.top;
    iVar3 = *(int *)(param_1 + 0x4a4) + local_1c.top;
    *(LONG *)(param_1 + 0x3b0) = local_1c.left;
    *(LONG *)(param_1 + 0x3b8) = local_1c.right;
    *(int *)(param_1 + 0x3bc) = iVar3;
    if (iVar3 <= local_1c.top) {
      SetRectEmpty((LPRECT)(param_1 + 0x3b0));
    }
    if ((0 < local_1c.bottom) && (*(int *)(param_1 + 0x3bc) <= local_1c.bottom)) {
      *(LONG *)(param_1 + 0x370) = local_1c.left;
      *(LONG *)(param_1 + 0x378) = local_1c.right;
      iVar2 = *(int *)(param_1 + 0x3bc) + 1;
      iVar3 = *(int *)(param_1 + 0x4b0) + 1 + iVar2;
      *(int *)(param_1 + 0x374) = iVar2;
      *(int *)(param_1 + 0x37c) = iVar3;
      if (local_1c.bottom < iVar3) {
        SetRectEmpty((LPRECT)(param_1 + 0x370));
      }
      iVar3 = *(int *)(param_1 + 0x37c);
      if (iVar3 < 1) {
        iVar3 = *(int *)(param_1 + 0x3bc) + 1;
      }
      FUN_00405800((LPRECT)(param_1 + 0x3c0),&local_1c.left,iVar3);
      if (*(int *)(param_1 + 0x494) != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x3c8) < 1) {
        SetRectEmpty((LPRECT)(param_1 + 0x430));
        return;
      }
      *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_1 + 0x3ac);
      ((LPRECT)(param_1 + 0x430))->left = ((LPRECT)(param_1 + 0x3c0))->left + 8;
      return;
    }
  }
  FUN_004076b0(param_1);
  return;
}



void __cdecl FUN_00405e00(int param_1)

{
  byte *pbVar1;
  HBITMAP hbm;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  ushort local_e;
  ushort local_c;
  ushort local_a;
  ushort local_8;
  ushort local_6;
  
  pbVar1 = *(byte **)(param_1 + 0x4bc);
  if ((pbVar1 != (byte *)0x0) && (*(int *)(param_1 + 0x494) == 0)) {
    local_14 = (ushort)*pbVar1;
    local_12 = (ushort)pbVar1[1];
    local_10 = (ushort)pbVar1[2];
    local_e = (ushort)pbVar1[3];
    local_c = (ushort)pbVar1[4];
    local_a = (ushort)pbVar1[5];
    local_8 = (ushort)pbVar1[6];
    local_6 = (ushort)pbVar1[7];
    hbm = CreateBitmap(8,8,1,1,&local_14);
    if (hbm == (HBITMAP)0x0) {
      return;
    }
    CreatePatternBrush(hbm);
    return;
  }
  CreateSolidBrush(*(COLORREF *)(param_1 + 0x2e0));
  return;
}



void __cdecl FUN_00405ea0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  SelectObject((HDC)*param_1,(HGDIOBJ)param_1[2]);
  if ((HGDIOBJ)param_1[1] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[1]);
  }
  if ((HDC)*param_1 != (HDC)0x0) {
    DeleteDC((HDC)*param_1);
  }
  FUN_00406030((int)param_1);
  if ((HGDIOBJ)param_1[0x122] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x122]);
  }
  if ((HMENU)param_1[0x123] != (HMENU)0x0) {
    DestroyMenu((HMENU)param_1[0x123]);
  }
  HeapFree(hHeap_004114a8,0,(LPVOID)param_1[0x110]);
  HeapFree(hHeap_004114a8,0,(LPVOID)param_1[0x111]);
  HeapFree(hHeap_004114a8,0,(LPVOID)param_1[0x112]);
  HeapFree(hHeap_004114a8,0,(LPVOID)param_1[0x113]);
  HeapFree(hHeap_004114a8,0,(LPVOID)param_1[0x114]);
  HeapFree(hHeap_004114a8,0,(LPVOID)param_1[0x115]);
  HeapFree(hHeap_004114a8,0,(LPVOID)param_1[0x118]);
  HeapFree(hHeap_004114a8,0,(LPVOID)param_1[0x116]);
  HeapFree(hHeap_004114a8,0,(LPVOID)param_1[0x117]);
  HeapFree(hHeap_004114a8,0,(LPVOID)param_1[0x119]);
  HeapFree(hHeap_004114a8,0,(LPVOID)param_1[0x11a]);
  HeapFree(hHeap_004114a8,0,(LPVOID)param_1[0x11b]);
  if ((HGDIOBJ)param_1[0x22] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x22]);
    param_1[0x22] = 0;
  }
  puVar2 = param_1 + 3;
  iVar1 = 0x1f;
  do {
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((LPVOID)param_1[0x12f] != (LPVOID)0x0) {
    HeapFree(hHeap_004114a8,0,(LPVOID)param_1[0x12f]);
  }
  HeapFree(hHeap_004114a8,0,param_1);
  FUN_004057e0();
  return;
}



void __cdecl FUN_00406030(int param_1)

{
  if (*(HGDIOBJ *)(param_1 + 0x470) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x470));
  }
  if (*(HGDIOBJ *)(param_1 + 0x474) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x474));
  }
  if (*(HGDIOBJ *)(param_1 + 0x478) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x478));
  }
  if (*(HGDIOBJ *)(param_1 + 0x47c) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x47c));
  }
  if (*(HGDIOBJ *)(param_1 + 0x480) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x480));
  }
  if (*(HGDIOBJ *)(param_1 + 0x484) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x484));
  }
  return;
}



uint __cdecl FUN_00406090(undefined4 *param_1)

{
  HDC hdc;
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  COLORREF CVar4;
  HBRUSH pHVar5;
  LPCWSTR pWVar6;
  int iVar7;
  tagSIZE *ptVar8;
  tagRECT local_28;
  tagSIZE local_18;
  HGDIOBJ local_10;
  uint local_c;
  LPCWSTR local_8;
  
  hdc = (HDC)*param_1;
  if ((int)param_1[0xf3] < 1) {
    return 1;
  }
  local_28.left = param_1[0xf0];
  local_28.top = param_1[0xf1];
  local_28.right = param_1[0xf2];
  local_28.bottom = param_1[0xf3];
  uVar1 = DrawEdge(hdc,&local_28,10,0x200f);
  iVar2 = FillRect(hdc,&local_28,(HBRUSH)param_1[8]);
  local_28.left = param_1[0xf0];
  local_28.top = param_1[0xf1];
  local_28.right = param_1[0xf2];
  local_28.bottom = param_1[0xf3];
  local_c = iVar2 != 0 & uVar1;
  if (param_1[0x125] == 0) {
    iVar2 = MulDiv(6,nNumerator_004114ac,0x60);
    iVar7 = 3;
  }
  else {
    iVar2 = MulDiv(4,nNumerator_004114ac,0x60);
    iVar7 = 4;
  }
  local_28.left = local_28.left + iVar2;
  iVar2 = MulDiv(iVar7,nNumerator_004114ac,0x60);
  local_28.top = local_28.top + iVar2;
  local_28.bottom = local_28.bottom + -2;
  local_28.right = local_28.right + (-2 - param_1[0x12d]);
  iVar2 = 0x470;
  if (param_1[0x125] == 0) {
    iVar2 = 0x488;
  }
  local_10 = SelectObject(hdc,*(HGDIOBJ *)(iVar2 + (int)param_1));
  iVar2 = 0x448;
  if (param_1[0x125] == 0) {
    iVar2 = 0x458;
  }
  local_8 = *(LPCWSTR *)(iVar2 + (int)param_1);
  ptVar8 = &local_18;
  iVar2 = lstrlenW(local_8);
  BVar3 = GetTextExtentPoint32W(hdc,local_8,iVar2,ptVar8);
  if (BVar3 == 0) {
    local_18.cy = MulDiv(0xf,nNumerator_004114ac,0x60);
  }
  if (local_18.cy + local_28.top <= local_28.bottom) {
    local_28.bottom = local_18.cy + local_28.top;
  }
  CVar4 = SetTextColor(hdc,param_1[0xbf]);
  iVar2 = DrawTextW(hdc,local_8,-1,&local_28,0x42020);
  uVar1 = 0;
  if (CVar4 != 0xffffffff) {
    uVar1 = local_c;
  }
  local_8 = (LPCWSTR)(0 < iVar2 & uVar1);
  pWVar6 = local_8;
  if (param_1[0x125] == 0) {
    pWVar6 = (LPCWSTR)param_1[0x117];
    ptVar8 = &local_18;
    iVar2 = lstrlenW(pWVar6);
    BVar3 = GetTextExtentPoint32W(hdc,pWVar6,iVar2,ptVar8);
    if (BVar3 == 0) {
      local_18.cx = MulDiv(0x45,nNumerator_004114ac,0x60);
      local_18.cy = MulDiv(0xf,nNumerator_004114ac,0x60);
    }
    param_1[0xf6] = local_18.cx + local_28.left;
    param_1[0xf4] = local_28.left;
    iVar2 = param_1[0xf3] + -2;
    if (local_18.cy + local_28.bottom <= param_1[0xf3] + -2) {
      iVar2 = local_18.cy + local_28.bottom;
    }
    param_1[0xf7] = iVar2;
    param_1[0xf5] = local_28.bottom + 1;
    if (local_28.bottom + 1 < iVar2) {
      iVar2 = FillRect(hdc,(LPRECT)(param_1 + 0xf4),(HBRUSH)param_1[0x10]);
      CVar4 = SetTextColor(hdc,param_1[0xc5]);
      iVar7 = DrawTextW(hdc,(LPCWSTR)param_1[0x117],-1,(LPRECT)(param_1 + 0xf4),0x42020);
      pWVar6 = (LPCWSTR)((uint)local_8 &
                        -(uint)(iVar2 != 0) & (uint)(0 < iVar7 && CVar4 != 0xffffffff));
    }
    else {
      SetRectEmpty((LPRECT)(param_1 + 0xf4));
      pWVar6 = local_8;
    }
  }
  if (local_10 != (HGDIOBJ)0x0) {
    SelectObject(hdc,local_10);
  }
  if (0 < (int)param_1[0xfb]) {
    if (param_1[0x125] == 0) {
      pHVar5 = (HBRUSH)param_1[0x22];
    }
    else {
      pHVar5 = (HBRUSH)0x0;
    }
    uVar1 = FUN_004052a0(hdc,param_1 + 0xf8,param_1[0x12e],pHVar5,(uint)(param_1[0x125] != 0));
    return uVar1 & (uint)pWVar6;
  }
  return (uint)pWVar6;
}



uint __cdecl FUN_00406350(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  HDC hdc;
  int iVar1;
  uint uVar2;
  int iVar3;
  COLORREF CVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  RECT local_18;
  HDC local_8;
  
  local_8 = (HDC)*param_1;
  if ((int)param_1[0xff] < 1) {
    return 1;
  }
  local_18.left = param_1[0xfc] + 3;
  local_18.top = param_1[0xfd] + 4 + param_1[(uint)(param_1[0x125] == 0) * 2 + 0x129];
  local_18.right = param_1[0xfe] + -3;
  local_18.bottom = param_1[0xff] + -3;
  iVar1 = FillRect(local_8,&local_18,(HBRUSH)param_1[0x12]);
  if (param_1[0x125] == 0) {
    if ((param_3 & 4) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_1[0x124];
    }
    uVar9 = param_1[0x118];
    uVar8 = param_1[0x11f];
    iVar3 = param_1[0x12a];
    iVar7 = param_1[299];
  }
  else {
    if ((param_3 & 4) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_1[0x124];
    }
    uVar9 = param_1[0x113];
    uVar8 = param_1[0x11c];
    iVar3 = param_1[0x128];
    iVar7 = param_1[0x129];
    param_3 = param_3 | 1;
  }
  uVar2 = FUN_00405540((HDC)*param_1,param_1 + 0xfc,0,iVar7,iVar3,param_3,0,uVar5,uVar8,uVar9);
  uVar2 = iVar1 != 0 & uVar2;
  iVar1 = param_1[0x104];
  iVar3 = MulDiv(3,nNumerator_004114ac,0x60);
  local_18.left = iVar3 + iVar1;
  iVar1 = param_1[0x105];
  iVar3 = MulDiv(1,nNumerator_004114ac,0x60);
  hdc = local_8;
  local_18.top = iVar3 + iVar1;
  if (local_18.top < local_18.bottom) {
    local_18.right = param_1[0x106];
    local_18.bottom = param_1[0x107];
    local_8 = (HDC)SelectObject(local_8,(HGDIOBJ)param_1[0x11e]);
    CVar4 = SetTextColor(hdc,param_1[0xbf]);
    iVar1 = DrawTextW(hdc,(LPCWSTR)param_1[0x114],-1,&local_18,0x40020);
    uVar6 = 0;
    if (CVar4 != 0xffffffff) {
      uVar6 = uVar2;
    }
    uVar6 = 0 < iVar1 & uVar6;
    if (local_8 != (HDC)0x0) {
      SelectObject(hdc,local_8);
    }
    if (0 < (int)param_1[0x10b]) {
      if (param_1[0x125] == 0) {
        local_18.left = param_1[0x108];
        local_18.top = param_1[0x109];
        local_18.right = param_1[0x10a];
        local_18.bottom = param_1[0x10b];
        InflateRect(&local_18,1,1);
        uVar2 = FUN_00404e90(hdc,&local_18,1,param_1[9]);
        uVar6 = uVar6 & uVar2;
      }
      local_18.left = param_1[0x108];
      local_18.top = param_1[0x109];
      local_18.right = param_1[0x10a];
      local_18.bottom = param_1[0x10b];
      iVar1 = 0x454;
      if (param_1[0x125] == 0) {
        iVar1 = 0x464;
      }
      uVar2 = FUN_00405210(hdc,&local_18.left,*(LPCWSTR *)(iVar1 + (int)param_1),
                           (HGDIOBJ)param_1[0x11e],param_1[0xc9]);
      return uVar2 & uVar6;
    }
    return uVar6;
  }
  return uVar2;
}



uint __cdecl FUN_004065a0(undefined4 *param_1)

{
  LPCWSTR pWVar1;
  bool bVar2;
  int iVar3;
  BOOL BVar4;
  COLORREF CVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  HDC pHVar9;
  tagSIZE *psizl;
  tagRECT local_24;
  tagSIZE local_14;
  HDC local_c;
  uint local_8;
  
  psizl = &local_14;
  pWVar1 = (LPCWSTR)param_1[0x11b];
  pHVar9 = (HDC)*param_1;
  iVar3 = lstrlenW(pWVar1);
  BVar4 = GetTextExtentPoint32W(pHVar9,pWVar1,iVar3,psizl);
  if (BVar4 == 0) {
    local_14.cx = MulDiv(0x14,nNumerator_004114ac,0x60);
    local_14.cy = MulDiv(8,nNumerator_004114ac,0x60);
  }
  iVar8 = local_14.cx >> 1;
  iVar3 = param_1[0xda];
  local_24.right = MulDiv(0x3a,nNumerator_004114ac,0x60);
  local_24.right = (iVar8 + iVar3) - local_24.right;
  iVar3 = param_1[0xdb];
  local_24.bottom = MulDiv(3,nNumerator_004114ac,0x60);
  pHVar9 = (HDC)*param_1;
  local_24.bottom = iVar3 - local_24.bottom;
  local_24.left = local_24.right - local_14.cx;
  local_24.top = local_24.bottom - local_14.cy;
  pWVar1 = (LPCWSTR)param_1[0x11b];
  local_8 = 1;
  local_c = pHVar9;
  if ((DAT_00411124 == 0) || (param_1[0x12f] == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    CVar5 = SetTextColor(pHVar9,0);
    if (CVar5 != 0xffffffff) {
      BVar4 = OffsetRect(&local_24,2,2);
      if (BVar4 != 0) {
        iVar3 = DrawTextW(pHVar9,pWVar1,-1,&local_24,0x40005);
        uVar6 = OffsetRect(&local_24,-1,-1);
        iVar8 = DrawTextW(local_c,pWVar1,-1,&local_24,0x40005);
        local_8 = OffsetRect(&local_24,-1,-1);
        bVar2 = true;
        uVar7 = 0;
        if (0 < iVar8) {
          uVar7 = uVar6 & 0 < iVar3;
        }
        local_8 = local_8 & uVar7;
        pHVar9 = local_c;
        goto LAB_004066fe;
      }
    }
    local_8 = 0;
  }
LAB_004066fe:
  if (((ushort)((*(ushort *)(param_1 + 0xb8) >> 8) * 5 + (*(ushort *)(param_1 + 0xb8) & 0xff) * 2 +
               (ushort)*(byte *)((int)param_1 + 0x2e2)) < 0x401) || (bVar2)) {
    CVar5 = 0xffffff;
  }
  else {
    CVar5 = 0;
  }
  CVar5 = SetTextColor(pHVar9,CVar5);
  if (CVar5 == 0xffffffff) {
    return 0;
  }
  iVar3 = DrawTextW(pHVar9,pWVar1,-1,&local_24,0x40005);
  uVar7 = 0;
  if (0 < iVar3) {
    uVar7 = local_8;
  }
  return uVar7;
}



void __cdecl FUN_00406770(HWND param_1,LONG param_2,LONG param_3,int param_4)

{
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  POINT pt_04;
  POINT pt_05;
  POINT pt_06;
  POINT pt_07;
  POINT pt_08;
  POINT pt_09;
  POINT pt_10;
  BOOL BVar1;
  uint uVar2;
  HWND hWnd;
  uint lParam;
  UINT Msg;
  
  pt.y = param_3;
  pt.x = param_2;
  BVar1 = PtInRect((RECT *)(param_4 + 0x430),pt);
  if (BVar1 == 0) {
    pt_00.y = param_3;
    pt_00.x = param_2;
    BVar1 = PtInRect((RECT *)(param_4 + 0x420),pt_00);
    if (BVar1 == 0) {
      pt_01.y = param_3;
      pt_01.x = param_2;
      BVar1 = PtInRect((RECT *)(param_4 + 0x400),pt_01);
      if (BVar1 == 0) {
        pt_02.y = param_3;
        pt_02.x = param_2;
        BVar1 = PtInRect((RECT *)(param_4 + 0x3f0),pt_02);
        if (BVar1 == 0) {
          pt_03.y = param_3;
          pt_03.x = param_2;
          BVar1 = PtInRect((RECT *)(param_4 + 0x370),pt_03);
          if (BVar1 == 0) {
            pt_04.y = param_3;
            pt_04.x = param_2;
            BVar1 = PtInRect((RECT *)(param_4 + 0x3e0),pt_04);
            if (BVar1 == 0) {
              if (*(int *)(param_4 + 0x494) == 0) {
                pt_05.y = param_3;
                pt_05.x = param_2;
                BVar1 = PtInRect((RECT *)(param_4 + 0x3d0),pt_05);
                if (BVar1 != 0) {
                  lParam = 0xd;
                  goto LAB_004068db;
                }
              }
              pt_06.y = param_3;
              pt_06.x = param_2;
              BVar1 = PtInRect((RECT *)(param_4 + 0x3b0),pt_06);
              if (BVar1 == 0) {
                pt_07.y = param_3;
                pt_07.x = param_2;
                BVar1 = PtInRect((RECT *)(param_4 + 0x3c0),pt_07);
                if (BVar1 == 0) {
                  pt_08.y = param_3;
                  pt_08.x = param_2;
                  BVar1 = PtInRect((RECT *)(param_4 + 0x3a0),pt_08);
                  if (BVar1 == 0) {
                    pt_09.y = param_3;
                    pt_09.x = param_2;
                    BVar1 = PtInRect((RECT *)(param_4 + 0x390),pt_09);
                    if (BVar1 == 0) {
                      pt_10.y = param_3;
                      pt_10.x = param_2;
                      BVar1 = PtInRect((RECT *)(param_4 + 0x380),pt_10);
                      lParam = -(uint)(BVar1 != 0) & 8;
                    }
                    else {
                      lParam = 5;
                    }
                  }
                  else {
                    lParam = 7;
                  }
                }
                else {
                  lParam = 2;
                }
              }
              else {
                lParam = 4;
              }
            }
            else {
              lParam = 9;
            }
          }
          else {
            lParam = 3;
          }
        }
        else {
          lParam = 0x10;
        }
      }
      else {
        lParam = (uint)(*(int *)(param_4 + 0x494) == 0) * 2 + 4;
      }
    }
    else {
      lParam = 10;
    }
  }
  else {
    lParam = 0xf;
  }
LAB_004068db:
  uVar2 = GetWindowLongW(param_1,-0xc);
  uVar2 = uVar2 & 0xffff;
  Msg = 0x111;
  hWnd = GetParent(param_1);
  SendMessageW(hWnd,Msg,uVar2,lParam);
  return;
}



undefined4 __cdecl FUN_00406910(HWND param_1,undefined4 *param_2)

{
  int iVar1;
  HFONT pHVar2;
  BOOL BVar3;
  HDC hdc;
  HDC pHVar4;
  HBITMAP pHVar5;
  HGDIOBJ pvVar6;
  HMENU hmenu;
  HANDLE pvVar7;
  LPVOID pvVar8;
  undefined1 local_70 [48];
  WCHAR local_40 [4];
  WCHAR local_38 [18];
  tagRECT local_14;
  
  iVar1 = FUN_00405750();
  if (iVar1 != 0) {
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    param_2[0x1a] = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 0;
    param_2[0x1e] = 0;
    *(undefined8 *)(param_2 + 0x1f) = 0;
    param_2[0x21] = 0;
    param_2[0x11d] = 0;
    param_2[0x11e] = 0;
    param_2[0x11f] = 0;
    param_2[0x120] = 0;
    param_2[0x121] = 0;
    pHVar2 = (HFONT)lstrcpyW((LPWSTR)(local_70 + 0x1c),L"MS Shell Dlg");
    if (pHVar2 != (HFONT)0x0) {
      local_70._0_4_ = MulDiv(8,nNumerator_004114ac,0x48);
      local_70._0_4_ = -local_70._0_4_;
      local_70._4_4_ = 0;
      local_70._8_4_ = 0;
      local_70._12_4_ = 0;
      local_70._16_4_ = 400;
      local_70[0x14] = '\0';
      local_70[0x15] = '\0';
      local_70[0x16] = '\0';
      local_70[0x17] = '\0';
      local_70[0x18] = '\0';
      local_70[0x19] = '\0';
      local_70[0x1a] = '\0';
      local_70[0x1b] = '\0';
      pHVar2 = CreateFontIndirectW((LOGFONTW *)local_70);
    }
    param_2[0x122] = pHVar2;
    BVar3 = GetClientRect(param_1,&local_14);
    if (BVar3 != 0) {
      hdc = GetDC(param_1);
      if (hdc != (HDC)0x0) {
        pHVar4 = CreateCompatibleDC(hdc);
        *param_2 = pHVar4;
        if (pHVar4 != (HDC)0x0) {
          pHVar5 = CreateCompatibleBitmap(hdc,local_14.right,local_14.bottom);
          param_2[1] = pHVar5;
          if (pHVar5 != (HBITMAP)0x0) {
            ReleaseDC(param_1,hdc);
            pvVar6 = SelectObject((HDC)*param_2,(HGDIOBJ)param_2[1]);
            param_2[2] = pvVar6;
            hmenu = LoadMenuW(hInstance_004114a0,(LPCWSTR)0x64);
            local_70._44_2_ = L'0';
            local_70._46_2_ = L'\0';
            local_40[0] = L'\x01';
            local_40[1] = L'\0';
            local_38[0] = L'\x03';
            local_38[1] = L'\0';
            SetMenuItemInfoW(hmenu,0x66,0,(LPCMENUITEMINFOW)(local_70 + 0x2c));
            local_38[0] = L'\x80';
            local_38[1] = L'\0';
            SetMenuItemInfoW(hmenu,0x67,0,(LPCMENUITEMINFOW)(local_70 + 0x2c));
            param_2[0x123] = hmenu;
            FUN_00401350(param_2 + 0x110,hInstance_004114a0,0x96);
            FUN_00401350(param_2 + 0x111,hInstance_004114a0,0x97);
            FUN_00401350(param_2 + 0x112,hInstance_004114a0,0x98);
            FUN_00401350(param_2 + 0x113,hInstance_004114a0,0x99);
            FUN_00401350(param_2 + 0x114,hInstance_004114a0,0x9a);
            FUN_00401350(param_2 + 0x115,hInstance_004114a0,0x9b);
            FUN_00401350(param_2 + 0x118,hInstance_004114a0,0xa0);
            FUN_00401350(param_2 + 0x116,hInstance_004114a0,0x9e);
            FUN_00401350(param_2 + 0x117,hInstance_004114a0,0x9f);
            FUN_00401350(param_2 + 0x119,hInstance_004114a0,0xa1);
            FUN_00401350(param_2 + 0x11a,hInstance_004114a0,0xa2);
            FUN_00401350(param_2 + 0x11b,hInstance_004114a0,0xa3);
            iVar1 = MulDiv(0x10,nNumerator_004114ac,0x60);
            pvVar7 = LoadImageW(hInstance_004114a0,(LPCWSTR)0x64,1,iVar1,iVar1,0);
            param_2[0x124] = pvVar7;
            FUN_00406c10();
            pvVar8 = FUN_004042b0();
            param_2[0x12f] = pvVar8;
            param_2[0x130] = 0;
            return 1;
          }
          DeleteDC((HDC)*param_2);
          *param_2 = 0;
        }
        ReleaseDC(param_1,hdc);
      }
    }
  }
  return 0;
}



void FUN_00406c10(void)

{
  LSTATUS LVar1;
  HKEY local_8;
  
  LVar1 = RegOpenKeyExW((HKEY)0x80000001,
                        L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",0,1,
                        &local_8);
  if (LVar1 == 0) {
    DAT_00411124 = FUN_004011c0(local_8,L"ListviewShadow",1);
  }
  return;
}



uint __cdecl FUN_00406c50(undefined4 param_1,undefined4 *param_2)

{
  HDC hDC;
  bool bVar1;
  byte bVar2;
  int iVar3;
  int mode;
  uint uVar4;
  COLORREF CVar5;
  COLORREF color;
  int iVar6;
  HGDIOBJ h;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined3 extraout_var;
  undefined4 uVar11;
  uint uVar12;
  
  FUN_004057c0(param_2 + 0xb7,param_2 + 3,param_2[0xd7]);
  iVar3 = (*DAT_0041141c)(param_2 + 0xb7,param_2 + 3,0x1f);
  mode = SetBkMode((HDC)*param_2,1);
  hDC = (HDC)*param_2;
  uVar4 = 0x28;
  if (param_2[0xd6] == 0) {
    uVar4 = 8;
  }
  if (param_2[0x12f] == 0) {
    iVar6 = FillRect(hDC,(RECT *)(param_2 + 0xd8),(HBRUSH)param_2[4]);
    bVar1 = iVar6 != 0;
  }
  else {
    CVar5 = SetTextColor(hDC,param_2[0xb8]);
    color = SetBkColor(hDC,param_2[0xbf]);
    iVar6 = FillRect(hDC,(RECT *)(param_2 + 0xd8),(HBRUSH)param_2[4]);
    bVar1 = iVar6 != 0 && CVar5 != 0xffffffff;
    SetBkColor(hDC,color);
  }
  uVar12 = (uint)bVar1;
  if (param_2[0x125] == 0) {
    h = SelectObject(hDC,(HGDIOBJ)param_2[0x121]);
    uVar7 = FUN_004065a0(param_2);
    uVar12 = uVar12 & uVar7;
    if (h != (HGDIOBJ)0x0) {
      SelectObject(hDC,h);
    }
  }
  iVar6 = param_2[0x127];
  uVar7 = 0;
  if (mode != 0) {
    uVar7 = uVar12;
  }
  if ((int)param_2[0xe3] < 1) {
    uVar12 = 1;
  }
  else {
    uVar12 = 4;
    if (param_2[0x125] != 0) {
      uVar12 = 0;
    }
    if (uVar12 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = param_2[0x124];
    }
    uVar12 = FUN_00405540((HDC)*param_2,param_2 + 0xe0,iVar6 + 1,param_2[0x129],param_2[0x128],
                          uVar12 | uVar4,1,uVar11,param_2[0x11c],param_2[0x110]);
    uVar12 = uVar12 & 1;
    if (0 < (int)param_2[0xeb]) {
      uVar10 = (uint)(param_2[0x125] == 0) * 4 + 1;
      if ((uVar10 & 4) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = param_2[0x124];
      }
      uVar10 = FUN_00405540((HDC)*param_2,param_2 + 0xe8,iVar6 + 1,param_2[0x129],param_2[0x128],
                            uVar10 | uVar4,1,uVar11,param_2[0x11c],param_2[0x111]);
      uVar8 = FUN_00406090(param_2);
      if ((int)param_2[0xdf] < 1) {
        uVar9 = 1;
      }
      else {
        bVar1 = FUN_004051a0(param_1,(HDC)*param_2,param_2 + 0xdc,param_2[0x123],param_2[0x11d]);
        uVar9 = (uint)bVar1;
      }
      uVar12 = uVar12 & uVar8 & uVar10 & uVar9;
    }
  }
  uVar4 = FUN_00406350(param_2,param_1,uVar4);
  if (param_2[0x125] == 0) {
    if ((int)param_2[0x10f] < 1) {
      uVar10 = 1;
    }
    else {
      bVar2 = FUN_00405410((HDC)*param_2,param_2 + 0x10c,(HGDIOBJ)param_2[0x120],
                           (LPCWSTR)param_2[0x11a]);
      uVar10 = CONCAT31(extraout_var,bVar2);
    }
  }
  else {
    uVar10 = 1;
  }
  if (mode != 0) {
    SetBkMode((HDC)*param_2,mode);
  }
  if (iVar3 != 0) {
    (*DAT_0041141c)(0,0,iVar3);
  }
  return uVar4 & uVar7 & uVar12 & uVar10;
}



uint FUN_00406f00(void)

{
  ATOM AVar1;
  WNDCLASSEXW local_34;
  
  if (DAT_00411438 != 0) {
    return 1;
  }
  local_34.cbSize = 0x30;
  local_34.style = 0;
  local_34.lpfnWndProc = FUN_00406fc0;
  local_34.cbClsExtra = 0;
  local_34.cbWndExtra = 0;
  local_34.hInstance = hInstance_004114a0;
  local_34.hIcon = (HICON)0x0;
  local_34.hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  local_34.hbrBackground = (HBRUSH)0x0;
  local_34.lpszMenuName = (LPCWSTR)0x0;
  local_34.lpszClassName = L"ThemePreviewWndClass";
  local_34.hIconSm = (HICON)0x0;
  AVar1 = RegisterClassExW(&local_34);
  DAT_00411438 = (uint)(AVar1 != 0);
  if (AVar1 == 0) {
    FUN_00401750(hInstance_004114a0,(HWND)0x0,0x66,0x65,0);
  }
  return DAT_00411438;
}



LRESULT FUN_00406fc0(HWND param_1,uint param_2,HKEY param_3,LOGFONTW *param_4)

{
  LONG LVar1;
  HGDIOBJ ho;
  bool bVar2;
  LOGFONTW *pLVar3;
  DWORD DVar4;
  LSTATUS LVar5;
  undefined4 *puVar6;
  HDC hdc;
  HMENU hMenu;
  HMENU hmenu;
  int iVar7;
  LONG LVar8;
  undefined4 uVar9;
  LRESULT LVar10;
  LONG *lpMem;
  HFONT pHVar11;
  uint uVar12;
  undefined1 local_44 [20];
  LONG local_30;
  BOOL local_28;
  
  if (param_2 < 0x112) {
    if (param_2 == 0x111) {
      if ((short)param_3 != 0x6f) {
        return 0;
      }
      LVar8 = GetWindowLongW(param_1,-0x15);
      *(uint *)(LVar8 + 0x494) = (uint)(*(int *)(LVar8 + 0x494) == 0);
      if (*(HGDIOBJ *)(LVar8 + 0x10) != (HGDIOBJ)0x0) {
        DeleteObject(*(HGDIOBJ *)(LVar8 + 0x10));
      }
      uVar9 = FUN_00405e00(LVar8);
      *(undefined4 *)(LVar8 + 0x10) = uVar9;
      FUN_00405840(LVar8);
      InvalidateRect(param_1,(RECT *)0x0,0);
      return 0;
    }
    switch(param_2) {
    case 1:
      goto switchD_00406ff1_caseD_1;
    case 2:
      puVar6 = (undefined4 *)GetWindowLongW(param_1,-0x15);
      FUN_00405ea0(puVar6);
      if (DAT_00411434 != 0) {
        return 0;
      }
      LVar5 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Appearance\\ClassicSchemes",0,2,
                            (PHKEY)&param_4);
      if (LVar5 != 0) {
        return 0;
      }
      LVar5 = RegSetValueExW((HKEY)param_4,L"ClassicPreview",0,4,(BYTE *)(puVar6 + 0x125),4);
      DAT_00411434 = (uint)(LVar5 == 0);
      RegCloseKey((HKEY)param_4);
      return 0;
    default:
      goto switchD_00406ff1_caseD_3;
    case 5:
      LVar8 = GetWindowLongW(param_1,-0x15);
      *(undefined4 *)(LVar8 + 0x360) = 0;
      *(undefined4 *)(LVar8 + 0x364) = 0;
      *(uint *)(LVar8 + 0x368) = (uint)param_4 & 0xffff;
      *(uint *)(LVar8 + 0x36c) = (uint)param_4 >> 0x10;
      return 0;
    case 0xf:
      puVar6 = (undefined4 *)GetWindowLongW(param_1,-0x15);
      if (puVar6[0x126] != 0) {
        return 0;
      }
      puVar6[0x126] = 1;
      FUN_00406c50(param_1,puVar6);
      hdc = BeginPaint(param_1,(LPPAINTSTRUCT)local_44);
      if (hdc == (HDC)0x0) {
        return 0;
      }
      BitBlt(hdc,0,0,puVar6[0xda],puVar6[0xdb],(HDC)*puVar6,0,0,0xcc0020);
      EndPaint(param_1,(PAINTSTRUCT *)local_44);
      puVar6[0x126] = 0;
      return 0;
    case 0x7b:
      LVar8 = GetWindowLongW(param_1,-0x15);
      hMenu = LoadMenuW(hInstance_004114a0,(LPCWSTR)0x6e);
      if (hMenu == (HMENU)0x0) {
        return 0;
      }
      hmenu = GetSubMenu(hMenu,0);
      if (hmenu != (HMENU)0x0) {
        iVar7 = GetSystemMetrics(0x28);
        if (*(int *)(LVar8 + 0x494) != 0) {
          local_44._16_4_ = 0x30;
          local_30 = 1;
          local_28 = 8;
          SetMenuItemInfoW(hmenu,0x6f,0,(LPCMENUITEMINFOW)(local_44 + 0x10));
        }
        TrackPopupMenuEx(hmenu,-(uint)(iVar7 != 0) & 8,(int)(short)param_4,
                         (int)(short)((uint)param_4 >> 0x10),param_1,(LPTPMPARAMS)0x0);
      }
      DestroyMenu(hMenu);
      return 0;
    }
  }
  if (0x401 < param_2) {
    if (param_2 != 0x402) {
      if (param_2 == 0x403) {
        LVar8 = GetWindowLongW(param_1,-0x15);
        pLVar3 = param_4;
        lpMem = *(LONG **)(LVar8 + 0x4bc);
        if (param_4 == (LOGFONTW *)0x0) {
          if (lpMem == (LONG *)0x0) {
            return 0;
          }
          HeapFree(hHeap_004114a8,0,lpMem);
          *(undefined4 *)(LVar8 + 0x4bc) = 0;
        }
        else {
          if (lpMem == (LONG *)0x0) {
            lpMem = (LONG *)HeapAlloc(hHeap_004114a8,0,8);
            *(LONG **)(LVar8 + 0x4bc) = lpMem;
            if (lpMem == (LONG *)0x0) {
              return 0;
            }
          }
          LVar1 = pLVar3->lfWidth;
          *lpMem = pLVar3->lfHeight;
          lpMem[1] = LVar1;
        }
        *(undefined4 *)(LVar8 + 0x4c0) = 1;
        return 0;
      }
      if (param_2 == 0x404) {
        LVar8 = GetWindowLongW(param_1,-0x15);
        FUN_00407760(LVar8,&param_4->lfHeight,param_3);
        if (((uint)param_3 & 2) != 0) {
          return 0;
        }
        FUN_00405840(LVar8);
        InvalidateRect(param_1,(RECT *)0x0,0);
        return 0;
      }
      goto switchD_00406ff1_caseD_3;
    }
    LVar8 = GetWindowLongW(param_1,-0x15);
    switch(param_3) {
    case (HKEY)0x0:
      iVar7 = 0x470;
      break;
    case (HKEY)0x1:
      iVar7 = 0x47c;
      break;
    case (HKEY)0x2:
      iVar7 = 0x474;
      break;
    case (HKEY)0x3:
      iVar7 = 0x480;
      break;
    case (HKEY)0x4:
      iVar7 = 0x478;
      break;
    case (HKEY)0x5:
      iVar7 = 0x484;
      break;
    default:
      goto switchD_0040737c_caseD_7;
    }
    ho = *(HGDIOBJ *)(LVar8 + iVar7);
    if (ho != (HGDIOBJ)0x0) {
      DeleteObject(ho);
    }
    pHVar11 = CreateFontIndirectW(param_4);
    *(HFONT *)(LVar8 + iVar7) = pHVar11;
    goto LAB_004075a0;
  }
  if (param_2 != 0x401) {
    if (param_2 == 0x201) {
      LVar8 = GetWindowLongW(param_1,-0x15);
      FUN_00406770(param_1,(uint)param_4 & 0xffff,(uint)param_4 >> 0x10,LVar8);
      return 0;
    }
switchD_00406ff1_caseD_3:
    LVar10 = DefWindowProcW(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
    return LVar10;
  }
  LVar8 = GetWindowLongW(param_1,-0x15);
  switch(param_3) {
  case (HKEY)0x0:
    if (*(LOGFONTW **)(LVar8 + 0x49c) == param_4) {
      bVar2 = false;
    }
    else {
      *(LOGFONTW **)(LVar8 + 0x49c) = param_4;
LAB_00407445:
      bVar2 = true;
    }
    break;
  case (HKEY)0x1:
    if (*(LOGFONTW **)(LVar8 + 0x4b4) != param_4) {
      *(LOGFONTW **)(LVar8 + 0x4b4) = param_4;
      goto LAB_00407445;
    }
    bVar2 = false;
    break;
  case (HKEY)0x2:
    if (*(LOGFONTW **)(LVar8 + 0x4b8) != param_4) {
      *(LOGFONTW **)(LVar8 + 0x4b8) = param_4;
      goto LAB_00407445;
    }
    bVar2 = false;
    break;
  case (HKEY)0x3:
    if (*(LOGFONTW **)(LVar8 + 0x4a0) != param_4) {
      *(LOGFONTW **)(LVar8 + 0x4a0) = param_4;
      goto LAB_00407445;
    }
    bVar2 = false;
    break;
  case (HKEY)0x4:
    if (*(LOGFONTW **)(LVar8 + 0x4a4) != param_4) {
      *(LOGFONTW **)(LVar8 + 0x4a4) = param_4;
      goto LAB_00407445;
    }
    bVar2 = false;
    break;
  case (HKEY)0x5:
    if (*(LOGFONTW **)(LVar8 + 0x4a8) != param_4) {
      *(LOGFONTW **)(LVar8 + 0x4a8) = param_4;
      goto LAB_00407445;
    }
    bVar2 = false;
    break;
  case (HKEY)0x6:
    if (*(LOGFONTW **)(LVar8 + 0x4ac) != param_4) {
      *(LOGFONTW **)(LVar8 + 0x4ac) = param_4;
      goto LAB_00407445;
    }
    bVar2 = false;
    break;
  default:
    goto switchD_0040737c_caseD_7;
  case (HKEY)0x8:
    if (*(LOGFONTW **)(LVar8 + 0x4b0) != param_4) {
      *(LOGFONTW **)(LVar8 + 0x4b0) = param_4;
      goto LAB_00407445;
    }
    bVar2 = false;
  }
  if (!bVar2) {
switchD_0040737c_caseD_7:
    return 0;
  }
  FUN_00405840(LVar8);
LAB_004075a0:
  InvalidateRect(param_1,(RECT *)0x0,0);
  return 1;
switchD_00406ff1_caseD_1:
  puVar6 = (undefined4 *)HeapAlloc(hHeap_004114a8,8,0x4c4);
  if (puVar6 == (undefined4 *)0x0) {
    uVar12 = 0x67;
  }
  else {
    SetLastError(0);
    SetWindowLongW(param_1,-0x15,(LONG)puVar6);
    DVar4 = GetLastError();
    if (DVar4 == 0) {
      iVar7 = FUN_00406910(param_1,puVar6);
      if (iVar7 != 0) {
        puVar6[0x126] = 0;
        LVar10 = 0;
        goto LAB_00407072;
      }
      uVar12 = 0x66;
    }
    else {
      uVar12 = 0x66;
    }
  }
  FUN_00401750(hInstance_004114a0,(HWND)0x0,uVar12,0x65,0);
  LVar10 = -1;
LAB_00407072:
  LVar8 = GetWindowLongW(param_1,-0x15);
  LVar5 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Appearance\\ClassicSchemes",0,1,
                        (PHKEY)&param_4);
  if (LVar5 == 0) {
    uVar12 = FUN_004011c0((HKEY)param_4,L"ClassicPreview",0);
    *(uint *)(LVar8 + 0x494) = uVar12;
    RegCloseKey((HKEY)param_4);
    return LVar10;
  }
  *(undefined4 *)(LVar8 + 0x494) = 0;
  return LVar10;
}



void FUN_00407690(void)

{
  BOOL BVar1;
  
  BVar1 = UnregisterClassW(L"ThemePreviewWndClass",hInstance_004114a0);
  if (BVar1 != 0) {
    DAT_00411438 = 0;
  }
  return;
}



void __cdecl FUN_004076b0(int param_1)

{
  SetRectEmpty((LPRECT)(param_1 + 0x3a0));
  SetRectEmpty((LPRECT)(param_1 + 0x3b0));
  SetRectEmpty((LPRECT)(param_1 + 0x3c0));
  if (*(int *)(param_1 + 0x494) == 0) {
    SetRectEmpty((LPRECT)(param_1 + 0x3d0));
    SetRectEmpty((LPRECT)(param_1 + 0x430));
    SetRectEmpty((LPRECT)(param_1 + 0x3e0));
    return;
  }
  SetRectEmpty((LPRECT)(param_1 + 0x370));
  SetRectEmpty((LPRECT)(param_1 + 0x3e0));
  return;
}



void __cdecl FUN_00407720(int param_1)

{
  SetRectEmpty((LPRECT)(param_1 + 0x3f0));
  SetRectEmpty((LPRECT)(param_1 + 0x400));
  SetRectEmpty((LPRECT)(param_1 + 0x410));
  SetRectEmpty((LPRECT)(param_1 + 0x420));
  return;
}



void __cdecl FUN_00407760(int param_1,undefined4 *param_2,HKEY param_3)

{
  LSTATUS LVar1;
  HBRUSH pHVar2;
  HBITMAP hbm;
  undefined4 uVar3;
  HFONT pHVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  COLORREF *pCVar9;
  undefined4 *puVar10;
  int local_8;
  
  if (((uint)param_3 & 4) == 0) {
    if (*(HGDIOBJ *)(param_1 + 0xc) == (HGDIOBJ)0x0) {
      puVar8 = param_2;
      puVar10 = (undefined4 *)(param_1 + 0x8c);
      for (iVar5 = 0xb5; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x2dc));
      *(HBRUSH *)(param_1 + 0xc) = pHVar2;
      hbm = CreateBitmap(8,8,1,1,&lpBits_0040ed10);
      if (hbm != (HBITMAP)0x0) {
        hbm = (HBITMAP)CreatePatternBrush(hbm);
      }
      *(HBITMAP *)(param_1 + 0x88) = hbm;
      uVar3 = FUN_00405e00(param_1);
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x2e4));
      *(HBRUSH *)(param_1 + 0x14) = pHVar2;
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x2e8));
      *(HBRUSH *)(param_1 + 0x18) = pHVar2;
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x2e8));
      *(HBRUSH *)(param_1 + 0x18) = pHVar2;
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x2ec));
      *(HBRUSH *)(param_1 + 0x1c) = pHVar2;
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x2f0));
      *(HBRUSH *)(param_1 + 0x20) = pHVar2;
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x2f4));
      *(HBRUSH *)(param_1 + 0x24) = pHVar2;
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x304));
      *(HBRUSH *)(param_1 + 0x34) = pHVar2;
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x308));
      *(HBRUSH *)(param_1 + 0x38) = pHVar2;
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x30c));
      *(HBRUSH *)(param_1 + 0x3c) = pHVar2;
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x310));
      *(HBRUSH *)(param_1 + 0x40) = pHVar2;
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x318));
      *(HBRUSH *)(param_1 + 0x48) = pHVar2;
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x338));
      *(HBRUSH *)(param_1 + 0x68) = pHVar2;
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x33c));
      *(HBRUSH *)(param_1 + 0x6c) = pHVar2;
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x348));
      *(HBRUSH *)(param_1 + 0x78) = pHVar2;
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x34c));
      *(HBRUSH *)(param_1 + 0x7c) = pHVar2;
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x350));
      *(HBRUSH *)(param_1 + 0x80) = pHVar2;
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x354));
      *(HBRUSH *)(param_1 + 0x84) = pHVar2;
    }
    else {
      pcVar6 = DeleteObject_exref;
      if (param_2[0x94] != *(int *)(param_1 + 0x2dc)) {
        DeleteObject(*(HGDIOBJ *)(param_1 + 0xc));
        pHVar2 = CreateSolidBrush(param_2[0x94]);
        pcVar6 = DeleteObject_exref;
        *(HBRUSH *)(param_1 + 0xc) = pHVar2;
      }
      piVar7 = (int *)(param_1 + 0x14);
      pCVar9 = param_2 + 0x96;
      local_8 = 0x1d;
      do {
        if ((*pCVar9 != piVar7[0xb4]) && (*piVar7 != 0)) {
          (*pcVar6)(*piVar7);
          pHVar2 = CreateSolidBrush(*pCVar9);
          *piVar7 = (int)pHVar2;
        }
        pCVar9 = pCVar9 + 1;
        piVar7 = piVar7 + 1;
        local_8 = local_8 + -1;
        pcVar6 = DeleteObject_exref;
      } while (local_8 != 0);
      puVar8 = param_2;
      puVar10 = (undefined4 *)(param_1 + 0x8c);
      for (iVar5 = 0xb5; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    if ((param_2[0x95] != *(int *)(param_1 + 0x2e0)) || (*(int *)(param_1 + 0x4c0) != 0)) {
      if (*(HGDIOBJ *)(param_1 + 0x10) != (HGDIOBJ)0x0) {
        DeleteObject(*(HGDIOBJ *)(param_1 + 0x10));
      }
      uVar3 = FUN_00405e00(param_1);
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      *(undefined4 *)(param_1 + 0x4c0) = 0;
    }
    if (((uint)param_3 & 1) == 0) {
      FUN_00406030(param_1);
      pHVar4 = CreateFontIndirectW((LOGFONTW *)(param_1 + 0xa4));
      *(HFONT *)(param_1 + 0x470) = pHVar4;
      pHVar4 = CreateFontIndirectW((LOGFONTW *)(param_1 + 0x16c));
      *(HFONT *)(param_1 + 0x474) = pHVar4;
      pHVar4 = CreateFontIndirectW((LOGFONTW *)(param_1 + 0x224));
      *(HFONT *)(param_1 + 0x478) = pHVar4;
      pHVar4 = CreateFontIndirectW((LOGFONTW *)(param_1 + 0x108));
      *(HFONT *)(param_1 + 0x47c) = pHVar4;
      pHVar4 = CreateFontIndirectW((LOGFONTW *)(param_1 + 0x1c8));
      *(HFONT *)(param_1 + 0x480) = pHVar4;
      pHVar4 = CreateFontIndirectW((LOGFONTW *)(param_1 + 0x280));
      *(HFONT *)(param_1 + 0x484) = pHVar4;
      *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_1 + 0x9c);
      *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_1 + 0xa0);
      *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_1 + 0x100);
      *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_1 + 0x104);
      *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_1 + 0x168);
      *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_1 + 0x94);
      *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x98);
      FUN_00405840(param_1);
    }
  }
  else {
    LVar1 = RegOpenKeyExW((HKEY)0x80000001,
                          L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",0,1,
                          &param_3);
    if (LVar1 == 0) {
      DAT_00411124 = FUN_004011c0(param_3,L"ListviewShadow",1);
      return;
    }
  }
  return;
}



bool __cdecl FUN_00407a80(COLORREF *param_1,HWND param_2)

{
  LSTATUS LVar1;
  BOOL BVar2;
  COLORREF local_70 [16];
  tagCHOOSECOLORW local_30;
  DWORD local_c;
  HKEY local_8;
  
  local_70[0] = 0xffffff;
  local_70[1] = 0xffffff;
  local_70[2] = 0xffffff;
  local_70[3] = 0xffffff;
  local_70[4] = 0xffffff;
  local_70[5] = 0xffffff;
  local_70[6] = 0xffffff;
  local_70[7] = 0xffffff;
  local_70[8] = 0xffffff;
  local_70[9] = 0xffffff;
  local_70[10] = 0xffffff;
  local_70[0xb] = 0xffffff;
  local_70[0xc] = 0xffffff;
  local_70[0xd] = 0xffffff;
  local_70[0xe] = 0xffffff;
  local_70[0xf] = 0xffffff;
  LVar1 = RegCreateKeyExW((HKEY)0x80000001,L"Control Panel\\Appearance",0,(LPWSTR)0x0,0,3,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_8,(LPDWORD)0x0);
  if (LVar1 == 0) {
    local_c = 0x40;
    RegQueryValueExW(local_8,L"CustomColors",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_70,&local_c);
  }
  else {
    local_8 = (HKEY)0x0;
  }
  local_30.hwndOwner = param_2;
  local_30.lStructSize = 0x24;
  local_30.hInstance = (HWND)0x0;
  local_30.rgbResult = *param_1;
  local_30.lpCustColors = local_70;
  local_30.Flags = 0x83;
  local_30.lCustData = 0;
  local_30.lpfnHook = (LPCCHOOKPROC)0x0;
  local_30.lpTemplateName = (LPCWSTR)0x0;
  BVar2 = ChooseColorW(&local_30);
  if (BVar2 != 0) {
    *param_1 = local_30.rgbResult;
  }
  if (local_8 != (HKEY)0x0) {
    RegSetValueExW(local_8,L"CustomColors",0,3,(BYTE *)local_70,0x40);
    RegCloseKey(local_8);
  }
  return BVar2 != 0;
}



HBITMAP FUN_00407b80(HWND param_1,int param_2)

{
  HDC hdc;
  HBITMAP h;
  HBRUSH pHVar1;
  HDC hdc_00;
  HDC hdc_01;
  HGDIOBJ h_00;
  
  hdc = GetDC(param_1);
  if (hdc == (HDC)0x0) {
    return (HBITMAP)0x0;
  }
  h = CreateCompatibleBitmap(hdc,*(int *)(param_2 + 8),*(int *)(param_2 + 0xc));
  if (h != (HBITMAP)0x0) {
    pHVar1 = GetSysColorBrush(0x12);
    hdc_00 = GetDC(param_1);
    if (hdc_00 != (HDC)0x0) {
      hdc_01 = CreateCompatibleDC(hdc_00);
      if (hdc_01 == (HDC)0x0) {
        ReleaseDC(param_1,hdc_00);
        ReleaseDC(param_1,hdc);
        return h;
      }
      h_00 = SelectObject(hdc_01,h);
      if (h_00 != (HGDIOBJ)0x0) {
        FUN_00404e90(hdc_01,param_2,1,pHVar1);
        SelectObject(hdc_01,h_00);
      }
      DeleteDC(hdc_01);
      ReleaseDC(param_1,hdc_00);
      SendMessageW(param_1,0xf7,0,(LPARAM)h);
    }
  }
  ReleaseDC(param_1,hdc);
  return h;
}



void __cdecl FUN_00407c60(HWND param_1)

{
  SendMessageW(param_1,0xf7,0,0);
  EnableWindow(param_1,0);
  return;
}



void __cdecl FUN_00407c90(HWND param_1,undefined4 param_2,HGDIOBJ param_3,undefined4 param_4)

{
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ h;
  
  hdc = GetDC(param_1);
  if (hdc != (HDC)0x0) {
    hdc_00 = CreateCompatibleDC(hdc);
    if (hdc_00 == (HDC)0x0) {
      ReleaseDC(param_1,hdc);
      return;
    }
    h = SelectObject(hdc_00,param_3);
    if (h != (HGDIOBJ)0x0) {
      FUN_00404e90(hdc_00,param_2,1,param_4);
      SelectObject(hdc_00,h);
    }
    DeleteDC(hdc_00);
    ReleaseDC(param_1,hdc);
    SendMessageW(param_1,0xf7,0,(LPARAM)param_3);
  }
  return;
}



void __cdecl FUN_00407d20(HWND param_1,RECT *param_2,HGDIOBJ param_3,HBRUSH param_4)

{
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ h;
  
  hdc = GetDC(param_1);
  if (hdc != (HDC)0x0) {
    hdc_00 = CreateCompatibleDC(hdc);
    if (hdc_00 == (HDC)0x0) {
      ReleaseDC(param_1,hdc);
      return;
    }
    h = SelectObject(hdc_00,param_3);
    if (h != (HGDIOBJ)0x0) {
      FillRect(hdc_00,param_2,param_4);
      SelectObject(hdc_00,h);
    }
    DeleteDC(hdc_00);
    ReleaseDC(param_1,hdc);
    SendMessageW(param_1,0xf7,0,(LPARAM)param_3);
  }
  return;
}



undefined4 __cdecl FUN_00407db0(HWND param_1,LPCWSTR param_2)

{
  HWND hWnd;
  int iVar1;
  
  hWnd = GetDlgItem(param_1,200);
  iVar1 = GetWindowTextW(hWnd,param_2,0x1d);
  if (0 < iVar1) {
    FUN_00401870(param_2);
    SetWindowTextW(hWnd,param_2);
    iVar1 = lstrlenW(param_2);
    if (0 < iVar1) {
      return 1;
    }
  }
  FUN_00401750(hInstance_004114a0,param_1,0x164,0x14d,0);
  return 0;
}



undefined4 __cdecl FUN_00407e20(HWND param_1,LPCWSTR param_2)

{
  HWND hWnd;
  int iVar1;
  
  hWnd = GetDlgItem(param_1,0xc9);
  iVar1 = GetWindowTextW(hWnd,param_2,0xe);
  if (0 < iVar1) {
    FUN_00401870(param_2);
    SetWindowTextW(hWnd,param_2);
    iVar1 = lstrlenW(param_2);
    if (0 < iVar1) {
      return 1;
    }
  }
  FUN_00401750(hInstance_004114a0,param_1,0x165,0x14d,0);
  return 0;
}



// lpDialogFunc parameter of DialogBoxParamW
// 

undefined4 lpDialogFunc_00407e90(HWND param_1,int param_2,uint param_3)

{
  HWND pHVar1;
  LRESULT LVar2;
  int iVar3;
  WCHAR local_5c [30];
  WCHAR local_20 [14];
  
  if (param_2 == 0x110) {
    hDlg_0041143c = param_1;
    pHVar1 = GetDlgItem(param_1,200);
    if (pHVar1 != (HWND)0x0) {
      if (DAT_00411140 == (int *)0x0) {
        iVar3 = LoadStringW(hInstance_004114a0,0x166,local_5c,0x1d);
        if (0 < iVar3) {
          LVar2 = SendMessageW(pHVar1,0x143,0,(LPARAM)local_5c);
          if (-1 < LVar2) {
            SendMessageW(pHVar1,0x14e,0,0);
          }
        }
      }
      else {
        FUN_00408530(pHVar1,DAT_00411140,DAT_00411578);
      }
      SendMessageW(pHVar1,0x141,0x1c,0);
    }
    pHVar1 = GetDlgItem(hDlg_0041143c,0xc9);
    if (pHVar1 != (HWND)0x0) {
      SendMessageW(pHVar1,0x141,0xd,0);
      if (DAT_00411578 != (int *)0x0) {
        FUN_00408530(pHVar1,(int *)DAT_00411578[1],DAT_0041157c);
        return 1;
      }
      iVar3 = LoadStringW(hInstance_004114a0,0x167,local_20,0xe);
      if (0 < iVar3) {
        LVar2 = SendMessageW(pHVar1,0x143,0,(LPARAM)local_20);
        if (-1 < LVar2) {
          SendMessageW(pHVar1,0x14e,0,0);
        }
      }
    }
  }
  else {
    if (param_2 != 0x111) {
      return 0;
    }
    if (param_3 >> 0x10 == 0) {
      if ((param_3 & 0xffff) == 1) {
        iVar3 = FUN_004080a0();
        if (iVar3 != 0) {
          EndDialog(param_1,1);
          return 1;
        }
      }
      else if ((param_3 & 0xffff) == 2) {
        EndDialog(param_1,0);
        return 1;
      }
    }
    else if ((param_3 >> 0x10 == 1) && ((short)param_3 == 200)) {
      pHVar1 = GetDlgItem(hDlg_0041143c,200);
      if (pHVar1 != (HWND)0x0) {
        LVar2 = FUN_004014e0(pHVar1);
        if ((LVar2 != 0) && (*(int *)(LVar2 + 4) != 0)) {
          pHVar1 = GetDlgItem(hDlg_0041143c,0xc9);
          if (pHVar1 != (HWND)0x0) {
            FUN_00408530(pHVar1,*(int **)(LVar2 + 4),*(int **)(LVar2 + 4));
            return 1;
          }
        }
      }
    }
  }
  return 1;
}



undefined4 FUN_004080a0(void)

{
  bool bVar1;
  byte bVar2;
  HWND pHVar3;
  int iVar4;
  HWND pHVar5;
  int *piVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  UINT UVar10;
  WCHAR local_5c [30];
  WCHAR local_20 [14];
  
  pHVar5 = hDlg_0041143c;
  pHVar3 = GetDlgItem(hDlg_0041143c,200);
  iVar4 = GetWindowTextW(pHVar3,local_5c,0x1d);
  if (iVar4 < 1) {
LAB_0040825f:
    uVar8 = 0x164;
  }
  else {
    FUN_00401870(local_5c);
    SetWindowTextW(pHVar3,local_5c);
    iVar4 = lstrlenW(local_5c);
    pHVar3 = hDlg_0041143c;
    if (iVar4 < 1) goto LAB_0040825f;
    pHVar5 = GetDlgItem(hDlg_0041143c,0xc9);
    iVar4 = GetWindowTextW(pHVar5,local_20,0xe);
    if (0 < iVar4) {
      FUN_00401870(local_20);
      SetWindowTextW(pHVar5,local_20);
      iVar4 = lstrlenW(local_20);
      if (0 < iVar4) {
        piVar6 = FUN_00402170(DAT_00411140,local_5c);
        piVar7 = (int *)0x0;
        if (((piVar6 != (int *)0x0) &&
            (piVar7 = FUN_00402170((int *)piVar6[1],local_20), piVar7 != (int *)0x0)) &&
           (iVar4 = FUN_00401750(hInstance_004114a0,hDlg_0041143c,0x161,0x14d,4), iVar4 != 6)) {
          return 0;
        }
        bVar2 = FUN_00403a70(0x411580,local_5c);
        if ((CONCAT31(extraout_var,bVar2) != 0) &&
           (bVar2 = FUN_00403bf0(0x411580,local_5c,local_20), CONCAT31(extraout_var_00,bVar2) != 0))
        {
          if (piVar6 == (int *)0x0) {
            piVar6 = FUN_00401fc0(local_5c);
            if (piVar6 == (int *)0x0) goto LAB_00408220;
            bVar1 = true;
            *piVar6 = (int)DAT_00411140;
            DAT_00411140 = piVar6;
          }
          else {
            bVar1 = false;
          }
          if (piVar7 != (int *)0x0) {
            DAT_0041157c = piVar7;
            DAT_00411578 = piVar6;
            return 1;
          }
          piVar7 = FUN_00401fc0(local_20);
          if (piVar7 != (int *)0x0) {
            *piVar7 = piVar6[1];
            piVar6[1] = (int)piVar7;
            DAT_00411578 = piVar6;
            DAT_0041157c = piVar7;
            return 1;
          }
          if (bVar1) {
            FUN_00402210(piVar6);
          }
        }
LAB_00408220:
        UVar10 = 0x10;
        uVar9 = 0x65;
        uVar8 = 0x15e;
        pHVar5 = hDlg_0041143c;
        goto LAB_0040826c;
      }
    }
    uVar8 = 0x165;
    pHVar5 = pHVar3;
  }
  UVar10 = 0;
  uVar9 = 0x14d;
LAB_0040826c:
  FUN_00401750(hInstance_004114a0,pHVar5,uVar8,uVar9,UVar10);
  return 0;
}



// lpDialogFunc parameter of DialogBoxParamW
// 

undefined4 lpDialogFunc_00408290(HWND param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  HWND pHVar3;
  WCHAR local_5c [30];
  WCHAR local_20 [14];
  
  if (param_2 == 0x110) {
    hDlg_00411440 = param_1;
    pHVar3 = GetDlgItem(param_1,200);
    if (pHVar3 != (HWND)0x0) {
      SendMessageW(pHVar3,0xc5,0x1c,0);
      SetWindowTextW(pHVar3,(LPCWSTR)DAT_00411578[2].unused);
    }
    pHVar3 = GetDlgItem(hDlg_00411440,0xc9);
    if (pHVar3 != (HWND)0x0) {
      SendMessageW(pHVar3,0xc5,0xd,0);
      SetWindowTextW(pHVar3,*(LPCWSTR *)(DAT_0041157c + 8));
    }
  }
  else {
    if (param_2 != 0x111) {
      return 0;
    }
    if (param_3 >> 0x10 == 0) {
      if ((param_3 & 0xffff) == 1) {
        iVar1 = FUN_00407e20(hDlg_00411440,local_20);
        if (iVar1 != 0) {
          iVar1 = lstrcmpiW(*(LPCWSTR *)(DAT_0041157c + 8),local_20);
          if (iVar1 != 0) {
            piVar2 = FUN_00402170((int *)DAT_00411578[1].unused,local_20);
            if (piVar2 != (int *)0x0) {
              FUN_00401750(hInstance_004114a0,hDlg_00411440,0x163,0x14e,0);
              return 1;
            }
            iVar1 = FUN_004039e0((int)DAT_00411578,DAT_0041157c,local_20);
            if (iVar1 == 0) {
              FUN_00401750(hInstance_004114a0,hDlg_00411440,0x160,0x65,0x10);
              return 1;
            }
          }
          iVar1 = FUN_00407db0(hDlg_00411440,local_5c);
          if (iVar1 != 0) {
            iVar1 = lstrcmpiW((LPCWSTR)DAT_00411578[2].unused,local_5c);
            if (iVar1 != 0) {
              piVar2 = FUN_00402170(DAT_00411140,local_5c);
              if (piVar2 != (int *)0x0) {
                FUN_00401750(hInstance_004114a0,hDlg_00411440,0x162,0x14e,0);
                return 1;
              }
              iVar1 = FUN_00403830(DAT_00411578,local_5c);
              if (iVar1 == 0) {
                FUN_00401750(hInstance_004114a0,hDlg_00411440,0x15f,0x65,0x10);
                return 1;
              }
            }
            EndDialog(param_1,1);
            return 1;
          }
        }
      }
      else if ((param_3 & 0xffff) == 2) {
        EndDialog(param_1,0);
        return 1;
      }
    }
  }
  return 1;
}



WPARAM __cdecl FUN_004084f0(HWND param_1,int param_2)

{
  WPARAM wParam;
  
  wParam = SendMessageW(param_1,0x143,0,*(LPARAM *)(param_2 + 8));
  if (-1 < (int)wParam) {
    SendMessageW(param_1,0x151,wParam,param_2);
  }
  return wParam;
}



undefined4 __cdecl FUN_00408530(HWND param_1,int *param_2,int *param_3)

{
  WPARAM wParam;
  undefined4 uVar1;
  undefined4 local_8;
  
  local_8 = 0;
  uVar1 = 0;
  if (param_2 != (int *)0x0) {
    do {
      wParam = SendMessageW(param_1,0x143,0,param_2[2]);
      if ((-1 < (int)wParam) &&
         (SendMessageW(param_1,0x151,wParam,(LPARAM)param_2), param_2 == param_3)) {
        SendMessageW(param_1,0x14e,wParam,0);
        local_8 = 1;
      }
      param_2 = (int *)*param_2;
      uVar1 = local_8;
    } while (param_2 != (int *)0x0);
  }
  return uVar1;
}



void FUN_004085a0(void)

{
  HWND pHVar1;
  uint uVar2;
  BOOL BVar3;
  
  pHVar1 = GetDlgItem(hDlg_00411444,0xca);
  if (pHVar1 != (HWND)0x0) {
    DAT_0041157c = FUN_004014e0(pHVar1);
  }
  uVar2 = FUN_00403280(0x411580,(HKEY)&DAT_00411578);
  if (uVar2 != 0) {
    SendDlgItemMessageW(hDlg_00411444,200,0x404,0,0x411580);
    FUN_0040af80();
    BVar3 = 1;
    pHVar1 = GetDlgItem(hDlg_00411444,0xcc);
    EnableWindow(pHVar1,BVar3);
    BVar3 = 1;
    pHVar1 = GetDlgItem(hDlg_00411444,0xcd);
    EnableWindow(pHVar1,BVar3);
    SendMessageW(hWnd_004114a4,0x468,(WPARAM)hDlg_00411444,0);
  }
  return;
}



uint FUN_00408650(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 1) {
    FUN_00407690();
  }
  else if (param_2 == 2) {
    uVar1 = FUN_00406f00();
    return uVar1;
  }
  return 0;
}



undefined4 FUN_00408680(HWND param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  HBRUSH ho;
  HWND pHVar1;
  BOOL BVar2;
  uint uVar3;
  HTHEME hTheme;
  LRESULT LVar4;
  undefined4 *puVar5;
  short sVar6;
  WPARAM wParam;
  int iVar7;
  int local_c;
  undefined4 local_8;
  
  if (param_2 < 0x4f) {
    if (param_2 != 0x4e) {
      if (param_2 == 2) {
        if (DAT_00411464 != (HGDIOBJ)0x0) {
          DeleteObject(DAT_00411464);
        }
        if (DAT_00411468 != (HGDIOBJ)0x0) {
          DeleteObject(DAT_00411468);
        }
        if (DAT_0041146c != (HGDIOBJ)0x0) {
          DeleteObject(DAT_0041146c);
        }
        puVar5 = &DAT_00411448;
        do {
          if ((HGDIOBJ)*puVar5 != (HGDIOBJ)0x0) {
            DeleteObject((HGDIOBJ)*puVar5);
          }
          puVar5 = puVar5 + 1;
        } while ((int)puVar5 < 0x411454);
        DAT_00411578 = 0;
        DAT_0041157c = 0;
        if (DAT_00411140 == (undefined4 *)0x0) {
          DAT_00411578 = 0;
          DAT_0041157c = 0;
          return 0;
        }
        FUN_00402210(DAT_00411140);
        DAT_00411140 = (undefined4 *)0x0;
        return 0;
      }
      if (param_2 == 0x15) {
        InflateRect((LPRECT)&lprc_00411454,1,1);
        ho = CreateSolidBrush(color_00411818);
        pHVar1 = GetDlgItem(hDlg_00411444,0xd6);
        if ((pHVar1 != (HWND)0x0) && (BVar2 = IsWindowEnabled(pHVar1), BVar2 != 0)) {
          FUN_00407c90(pHVar1,&lprc_00411454,DAT_00411448,ho);
        }
        pHVar1 = GetDlgItem(hDlg_00411444,0xd8);
        if ((pHVar1 != (HWND)0x0) && (BVar2 = IsWindowEnabled(pHVar1), BVar2 != 0)) {
          FUN_00407c90(pHVar1,&lprc_00411454,DAT_0041144c,ho);
        }
        pHVar1 = GetDlgItem(hDlg_00411444,0xe1);
        if ((pHVar1 != (HWND)0x0) && (BVar2 = IsWindowEnabled(pHVar1), BVar2 != 0)) {
          FUN_00407c90(pHVar1,&lprc_00411454,DAT_00411450,ho);
        }
        DeleteObject(ho);
        InflateRect((LPRECT)&lprc_00411454,-1,-1);
        FUN_00403790();
        return 0;
      }
      if (param_2 != 0x1a) {
        return 0;
      }
      if (param_3 < 0x100a) {
        if (param_3 == 0x1009) {
          FUN_004037e0();
          return 0;
        }
        if (param_3 != 0) {
          if (param_3 == 0x22) {
            FUN_00403800();
            return 0;
          }
          if (param_3 != 0x2a) {
            return 0;
          }
          FUN_00403820();
          return 0;
        }
        wParam = 4;
      }
      else {
        if (param_3 != 0x100b) {
          if (param_3 != 0x1023) {
            return 0;
          }
          FUN_004037c0();
          return 0;
        }
        wParam = 1;
      }
      SendDlgItemMessageW(hDlg_00411444,200,0x404,wParam,0x411580);
      return 0;
    }
    iVar7 = param_4[2];
    if (iVar7 == -0xca) {
      LVar4 = SendDlgItemMessageW(hDlg_00411444,0xc9,0x147,0,0);
      local_c = 0;
      if (-1 < LVar4) {
        local_c = DAT_00411578;
      }
      LVar4 = SendDlgItemMessageW(hDlg_00411444,0xca,0x147,0,0);
      local_8 = 0;
      if (-1 < LVar4) {
        local_8 = DAT_0041157c;
      }
      FUN_00401d20((HKEY)&lParam_00411580,&local_c);
    }
    else if (iVar7 != -0xc9) {
      if (iVar7 != -0xc) {
        return 0;
      }
      BVar2 = IsThemeActive();
      if (BVar2 == 0) {
        return 0;
      }
      pHVar1 = (HWND)*param_4;
      uVar3 = GetWindowLongW(pHVar1,-0x10);
      if ((uVar3 & 0xc0) == 0) {
        return 0;
      }
      if (param_4[3] != 3) {
        if (param_4[3] != 1) {
          return 0;
        }
        DrawThemeParentBackground(pHVar1,(HDC)param_4[4],(RECT *)0x0);
        hTheme = OpenThemeData(pHVar1,L"Button");
        if (hTheme == (HTHEME)0x0) {
          return 0;
        }
        uVar3 = param_4[10];
        if ((uVar3 & 1) == 0) {
          if ((uVar3 & 4) == 0) {
            if ((uVar3 & 0x40) == 0) {
              uVar3 = (uVar3 & 0x10 | 4) >> 2;
            }
            else {
              uVar3 = 2;
            }
          }
          else {
            uVar3 = 4;
          }
        }
        else {
          uVar3 = 3;
        }
        DrawThemeBackground(hTheme,(HDC)param_4[4],1,uVar3,(LPCRECT)(param_4 + 5),(LPCRECT)0x0);
        CloseThemeData(hTheme);
        return 4;
      }
      DrawThemeParentBackground(pHVar1,(HDC)param_4[4],(RECT *)0x0);
      return 4;
    }
    SetWindowLongW(param_1,0,0);
    return 1;
  }
  if (param_2 == 0x110) {
    hDlg_00411444 = param_1;
    FUN_00409f30();
    return 0;
  }
  if (param_2 != 0x111) {
    return 0;
  }
  if (DAT_00411474 != param_2 - 0x111) {
    return 0;
  }
  sVar6 = (short)(param_3 >> 0x10);
  switch(param_3 & 0xffff) {
  case 200:
    puVar5 = param_4;
    pHVar1 = GetDlgItem(param_1,0xce);
    iVar7 = FUN_004016b0(pHVar1,(int)puVar5);
    if (iVar7 != 0) {
      DAT_00411470 = param_4;
      FUN_0040a9e0();
    }
    break;
  case 0xd0:
    FUN_00409d60(sVar6,*(int *)(&DAT_0040ee80 + (int)DAT_00411470 * 0x18),0xd0,0xd1);
    break;
  case 0xd3:
    FUN_00409d60(sVar6,*(int *)(&DAT_0040ee84 + (int)DAT_00411470 * 0x18),0xd3,0xd4);
    break;
  case 0xde:
    iVar7 = 0xdf;
    goto LAB_00408aee;
  case 0xe3:
    iVar7 = 0xe4;
LAB_00408aee:
    FUN_00409c40(sVar6,iVar7);
  }
  if (param_3 >> 0x10 == 0) {
    FUN_004090c0(param_3 & 0xffff);
    return 0;
  }
  if (param_3 >> 0x10 != 1) {
    return 0;
  }
  FUN_00409890((short)param_3);
  return 0;
}



void __cdecl FUN_00408b80(BOOL param_1)

{
  HWND pHVar1;
  BOOL bEnable;
  
  bEnable = param_1;
  pHVar1 = GetDlgItem(hDlg_00411444,0xcc);
  EnableWindow(pHVar1,bEnable);
  pHVar1 = GetDlgItem(hDlg_00411444,0xcd);
  EnableWindow(pHVar1,param_1);
  return;
}



// lpProc parameter of EnumFontFamiliesExW
// 

undefined4 lpProc_00408bc0(int param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  if (*(short *)(param_1 + 0x1c) == 0x40) {
    return 2;
  }
  SendMessageW(param_4,0x143,0,(LPARAM)(param_1 + 0x1c));
  return 1;
}



void FUN_00408c00(void)

{
  HWND pHVar1;
  BOOL BVar2;
  tagRECT local_28;
  HWND local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  pHVar1 = GetDlgItem(hDlg_00411444,0xce);
  if ((pHVar1 != (HWND)0x0) && (BVar2 = GetClientRect(pHVar1,&local_28), BVar2 != 0)) {
    local_14 = local_28.bottom;
    BVar2 = GetWindowRect(hDlg_00411444,&local_28);
    if (BVar2 != 0) {
      local_c = -local_28.left;
      local_8 = -local_28.top;
      local_18 = GetDlgItem(hDlg_00411444,0xcb);
      local_10 = local_28.bottom + 2;
      BVar2 = GetWindowRect(local_18,&local_28);
      if (BVar2 != 0) {
        OffsetRect(&local_28,local_c,local_8);
        SetWindowPos(local_18,(HWND)0x0,local_28.left,local_28.top + -1,
                     local_28.right - local_28.left,local_10,0x31c);
      }
      local_18 = GetDlgItem(hDlg_00411444,0xcc);
      BVar2 = GetWindowRect(local_18,&local_28);
      if (BVar2 != 0) {
        OffsetRect(&local_28,local_c,local_8);
        SetWindowPos(local_18,(HWND)0x0,local_28.left,local_28.top + -1,
                     local_28.right - local_28.left,local_10,0x31c);
      }
      local_18 = GetDlgItem(hDlg_00411444,0xcd);
      BVar2 = GetWindowRect(local_18,&local_28);
      if (BVar2 != 0) {
        OffsetRect(&local_28,local_c,local_8);
        SetWindowPos(local_18,(HWND)0x0,local_28.left,local_28.top + -1,
                     local_28.right - local_28.left,local_10,0x31c);
      }
      local_18 = GetDlgItem(hDlg_00411444,0xd0);
      BVar2 = GetWindowRect(local_18,&local_28);
      if (BVar2 != 0) {
        SetWindowPos(local_18,(HWND)0x0,0,0,local_28.right - local_28.left,local_14,0x31e);
      }
      local_18 = GetDlgItem(hDlg_00411444,0xd1);
      BVar2 = GetWindowRect(local_18,&local_28);
      if (BVar2 != 0) {
        SetWindowPos(local_18,(HWND)0x0,0,0,local_28.right - local_28.left,local_14,0x31e);
      }
      local_18 = GetDlgItem(hDlg_00411444,0xd3);
      BVar2 = GetWindowRect(local_18,&local_28);
      if (BVar2 != 0) {
        SetWindowPos(local_18,(HWND)0x0,0,0,local_28.right - local_28.left,local_14,0x31e);
      }
      local_18 = GetDlgItem(hDlg_00411444,0xd4);
      BVar2 = GetWindowRect(local_18,&local_28);
      if (BVar2 != 0) {
        SetWindowPos(local_18,(HWND)0x0,0,0,local_28.right - local_28.left,local_14,0x31e);
      }
      local_18 = GetDlgItem(hDlg_00411444,0xde);
      BVar2 = GetWindowRect(local_18,&local_28);
      if (BVar2 != 0) {
        SetWindowPos(local_18,(HWND)0x0,0,0,local_28.right - local_28.left,local_14,0x31e);
      }
      local_18 = GetDlgItem(hDlg_00411444,0xdf);
      BVar2 = GetWindowRect(local_18,&local_28);
      if (BVar2 != 0) {
        SetWindowPos(local_18,(HWND)0x0,0,0,local_28.right - local_28.left,local_14,0x31e);
      }
      local_18 = GetDlgItem(hDlg_00411444,0xe3);
      BVar2 = GetWindowRect(local_18,&local_28);
      if (BVar2 != 0) {
        SetWindowPos(local_18,(HWND)0x0,0,0,local_28.right - local_28.left,local_14,0x31e);
      }
      local_18 = GetDlgItem(hDlg_00411444,0xe4);
      BVar2 = GetWindowRect(local_18,&local_28);
      if (BVar2 != 0) {
        SetWindowPos(local_18,(HWND)0x0,0,0,local_28.right - local_28.left,local_14,0x31e);
      }
      local_18 = GetDlgItem(hDlg_00411444,0xd6);
      BVar2 = GetWindowRect(local_18,&local_28);
      if (BVar2 != 0) {
        OffsetRect(&local_28,local_c,local_8);
        SetWindowPos(local_18,(HWND)0x0,local_28.left,local_28.top + -1,
                     local_28.right - local_28.left,local_10,0x31c);
      }
      local_18 = GetDlgItem(hDlg_00411444,0xd8);
      BVar2 = GetWindowRect(local_18,&local_28);
      if (BVar2 != 0) {
        OffsetRect(&local_28,local_c,local_8);
        SetWindowPos(local_18,(HWND)0x0,local_28.left,local_28.top + -1,
                     local_28.right - local_28.left,local_10,0x31c);
      }
      local_18 = GetDlgItem(hDlg_00411444,0xe1);
      BVar2 = GetWindowRect(local_18,&local_28);
      if (BVar2 != 0) {
        OffsetRect(&local_28,local_c,local_8);
        SetWindowPos(local_18,(HWND)0x0,local_28.left,local_28.top + -1,
                     local_28.right - local_28.left,local_10,0x31c);
      }
      local_18 = GetDlgItem(hDlg_00411444,0xe6);
      BVar2 = GetWindowRect(local_18,&local_28);
      if (BVar2 != 0) {
        OffsetRect(&local_28,local_c,local_8);
        SetWindowPos(local_18,(HWND)0x0,local_28.left,local_28.top + -1,
                     local_28.right - local_28.left,local_10,0x31c);
      }
      local_18 = GetDlgItem(hDlg_00411444,0xe7);
      BVar2 = GetWindowRect(local_18,&local_28);
      if (BVar2 != 0) {
        OffsetRect(&local_28,local_c,local_8);
        SetWindowPos(local_18,(HWND)0x0,local_28.left,local_28.top + -1,
                     local_28.right - local_28.left,local_10,0x31c);
      }
      pHVar1 = GetDlgItem(hDlg_00411444,0xe8);
      BVar2 = GetWindowRect(pHVar1,&local_28);
      if (BVar2 != 0) {
        OffsetRect(&local_28,local_c,local_8);
        SetWindowPos(pHVar1,(HWND)0x0,local_28.left,local_28.top + -1,local_28.right - local_28.left
                     ,local_10,0x31c);
      }
    }
  }
  return;
}



void __cdecl FUN_004090c0(uint param_1)

{
  COLORREF CVar1;
  bool bVar2;
  INT_PTR IVar3;
  HWND pHVar4;
  HWND hWnd;
  WPARAM WVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  LRESULT LVar7;
  uint nIDDlgItem;
  int iVar8;
  
  nIDDlgItem = param_1 & 0xffff;
  switch(nIDDlgItem) {
  case 0xcb:
    IVar3 = DialogBoxParamW(hInstance_004114a0,(LPCWSTR)0x12d,hDlg_00411444,lpDialogFunc_00407e90,0)
    ;
    if ((IVar3 != 0) && (pHVar4 = GetDlgItem(hDlg_00411444,0xc9), pHVar4 != (HWND)0x0)) {
      iVar8 = FUN_004016b0(pHVar4,DAT_00411578);
      iVar6 = DAT_00411578;
      if (iVar8 == 0) {
        WVar5 = SendMessageW(pHVar4,0x143,0,*(LPARAM *)(DAT_00411578 + 8));
        if (-1 < (int)WVar5) {
          SendMessageW(pHVar4,0x151,WVar5,iVar6);
        }
        SendMessageW(pHVar4,0x14e,WVar5,0);
      }
      else {
        FUN_0040a6e0();
      }
      pHVar4 = GetDlgItem(hDlg_00411444,0xca);
      if ((pHVar4 != (HWND)0x0) && (iVar6 = FUN_004016b0(pHVar4,DAT_0041157c), iVar6 == 0)) {
        WVar5 = FUN_004084f0(pHVar4,DAT_0041157c);
        SendMessageW(pHVar4,0x14e,WVar5,0);
        FUN_00408b80(1);
        return;
      }
    }
    break;
  case 0xcc:
    IVar3 = DialogBoxParamW(hInstance_004114a0,(LPCWSTR)0x12e,hDlg_00411444,lpDialogFunc_00408290,0)
    ;
    if (IVar3 != 0) {
      FUN_0040a790(0xc9);
      FUN_0040a790(0xca);
      return;
    }
    break;
  case 0xcd:
    if ((((DAT_00411578 != 0) && (DAT_0041157c != 0)) &&
        (pHVar4 = GetDlgItem(hDlg_00411444,0xc9), pHVar4 != (HWND)0x0)) &&
       ((hWnd = GetDlgItem(hDlg_00411444,0xca), hWnd != (HWND)0x0 &&
        (WVar5 = SendMessageW(pHVar4,0x147,0,0), -1 < (int)WVar5)))) {
      LVar7 = SendMessageW(hWnd,0x146,0,0);
      iVar6 = FUN_00401750(hInstance_004114a0,hDlg_00411444,(1 < LVar7) + 0x169,0x168,0x34);
      if (iVar6 == 6) {
        if (LVar7 < 2) {
          iVar6 = FUN_00402020(&DAT_00411578);
          if (iVar6 != 0) {
            SendMessageW(pHVar4,0x144,WVar5,0);
            FUN_00408b80(0);
            SendMessageW(pHVar4,0x14e,0,0);
            SendMessageW(hWnd,0x14b,0,0);
            return;
          }
          FUN_00401750(hInstance_004114a0,hDlg_00411444,0x16b,0x65,0x10);
          return;
        }
        iVar6 = FUN_00402130(&DAT_00411578,&DAT_0041157c);
        if (iVar6 != 0) {
          WVar5 = SendMessageW(hWnd,0x147,0,0);
          SendMessageW(hWnd,0x144,WVar5,0);
          FUN_00408b80(0);
          FUN_004085a0();
          return;
        }
        FUN_00401750(hInstance_004114a0,hDlg_00411444,0x16c,0x65,0x10);
        return;
      }
    }
    break;
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd7:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe9:
  case 0xea:
    break;
  case 0xd6:
    iVar6 = *(int *)(&DAT_0040ee88 + DAT_00411470 * 0x18);
    CVar1 = (&color_004117d0)[iVar6];
    bVar2 = FUN_00407a80(&color_004117d0 + iVar6,hDlg_00411444);
    if (CONCAT31(extraout_var,bVar2) == 0) break;
    iVar8 = 0;
    if (iVar6 == 0) {
      if (color_004117d0 != DAT_00411820) {
        DAT_00411820 = color_004117d0;
        iVar8 = 1;
      }
    }
    else if (iVar6 == 2) {
      iVar8 = FUN_00409840(2,0x1b,CVar1);
    }
    else if (iVar6 == 3) {
      iVar8 = FUN_00409840(3,0x1c,CVar1);
    }
    if ((&color_004117d0)[iVar6] == CVar1) {
LAB_004095c8:
      if (iVar8 == 0) break;
    }
    else {
      FUN_0040a8c0(0xd6,0,iVar6);
    }
LAB_004095d0:
    SendDlgItemMessageW(hDlg_00411444,200,0x404,1,0x411580);
    SendDlgItemMessageW(hDlg_00411444,0xc9,0x14e,0xffffffff,0);
    SendDlgItemMessageW(hDlg_00411444,0xca,0x14b,0,0);
    goto LAB_004097be;
  case 0xd8:
    iVar6 = *(int *)(&DAT_0040ee8c + DAT_00411470 * 0x18);
    CVar1 = (&color_004117d0)[iVar6];
    bVar2 = FUN_00407a80(&color_004117d0 + iVar6,hDlg_00411444);
    if (CONCAT31(extraout_var_00,bVar2) != 0) {
      iVar8 = 0;
      if (iVar6 == 0) {
        if (color_004117d0 != DAT_00411820) {
          DAT_00411820 = color_004117d0;
          iVar8 = 1;
        }
      }
      else if (iVar6 == 2) {
        iVar8 = FUN_00409840(2,0x1b,CVar1);
      }
      else if (iVar6 == 3) {
        iVar8 = FUN_00409840(3,0x1c,CVar1);
      }
      if ((&color_004117d0)[iVar6] == CVar1) goto LAB_004095c8;
      FUN_0040a8c0(0xd8,1,iVar6);
      goto LAB_004095d0;
    }
    break;
  case 0xe1:
    iVar6 = *(int *)(&DAT_0040ee94 + DAT_00411470 * 0x18);
    CVar1 = (&color_004117d0)[iVar6];
    bVar2 = FUN_00407a80(&color_004117d0 + iVar6,hDlg_00411444);
    if (CONCAT31(extraout_var_01,bVar2) != 0) {
      iVar8 = 0;
      if (iVar6 == 0) {
        if (color_004117d0 != DAT_00411820) {
          DAT_00411820 = color_004117d0;
          iVar8 = 1;
        }
      }
      else if (iVar6 == 2) {
        iVar8 = FUN_00409840(2,0x1b,CVar1);
      }
      else if (iVar6 == 3) {
        iVar8 = FUN_00409840(3,0x1c,CVar1);
      }
      if ((&color_004117d0)[iVar6] == CVar1) goto LAB_004095c8;
      FUN_0040a8c0(0xe1,2,iVar6);
      goto LAB_004095d0;
    }
    break;
  case 0xe6:
    WVar5 = *(WPARAM *)(&DAT_0040ee90 + DAT_00411470 * 0x18);
    if ((-1 < (int)WVar5) && (iVar6 = FUN_00402560(0x411580,WVar5), iVar6 != 0)) {
      LVar7 = SendDlgItemMessageW(hDlg_00411444,0xe6,0xf0,0,0);
      pHVar4 = hDlg_00411444;
      *(uint *)(iVar6 + 0x10) = (-(uint)(LVar7 != 1) & 0xfffffed4) + 700;
      SendDlgItemMessageW(pHVar4,200,0x402,WVar5,iVar6);
      SendDlgItemMessageW(hDlg_00411444,0xca,0x14e,0xffffffff,0);
      goto LAB_004097be;
    }
    break;
  case 0xe7:
    WVar5 = *(WPARAM *)(&DAT_0040ee90 + DAT_00411470 * 0x18);
    if ((-1 < (int)WVar5) && (iVar6 = FUN_00402560(0x411580,WVar5), iVar6 != 0)) {
      LVar7 = SendDlgItemMessageW(hDlg_00411444,0xe7,0xf0,0,0);
      pHVar4 = hDlg_00411444;
      *(bool *)(iVar6 + 0x14) = LVar7 == 1;
      SendDlgItemMessageW(pHVar4,200,0x402,WVar5,iVar6);
      SendDlgItemMessageW(hDlg_00411444,0xca,0x14e,0xffffffff,0);
      goto LAB_004097be;
    }
    break;
  case 0xe8:
    WVar5 = *(WPARAM *)(&DAT_0040ee90 + DAT_00411470 * 0x18);
    if ((-1 < (int)WVar5) && (iVar6 = FUN_00402560(0x411580,WVar5), iVar6 != 0)) {
      LVar7 = SendDlgItemMessageW(hDlg_00411444,0xe8,0xf0,0,0);
      pHVar4 = hDlg_00411444;
      *(bool *)(iVar6 + 0x15) = LVar7 == 1;
      SendDlgItemMessageW(pHVar4,200,0x402,WVar5,iVar6);
      SendDlgItemMessageW(hDlg_00411444,0xca,0x14e,0xffffffff,0);
      goto LAB_004097be;
    }
    break;
  case 0xeb:
    LVar7 = SendDlgItemMessageW(hDlg_00411444,nIDDlgItem,0xf0,0,0);
    DAT_0041184c = (uint)(LVar7 == 1);
    goto LAB_004097a0;
  case 0xec:
    LVar7 = SendDlgItemMessageW(hDlg_00411444,nIDDlgItem,0xf0,0,0);
    DAT_00411850 = (uint)(LVar7 == 1);
LAB_004097a0:
    SendDlgItemMessageW(hDlg_00411444,200,0x404,1,0x411580);
    FUN_0040a880();
LAB_004097be:
    SendMessageW(hWnd_004114a4,0x468,(WPARAM)hDlg_00411444,0);
    break;
  default:
    goto switchD_004090e1_default;
  }
switchD_004090e1_default:
  return;
}



undefined4 __cdecl FUN_00409840(int param_1,int param_2,int param_3)

{
  if ((DAT_0041184c == 0) && (param_3 == (&color_004117d0)[param_2])) {
    (&color_004117d0)[param_2] = (&color_004117d0)[param_1];
    FUN_0040a8c0(0xd8,1,param_2);
    return 1;
  }
  return 0;
}



void __cdecl FUN_00409890(undefined2 param_1)

{
  LOGFONTW *pLVar1;
  int iVar2;
  HWND pHVar3;
  int iVar4;
  LRESULT LVar5;
  int *piVar6;
  int *piVar7;
  UINT Msg;
  WPARAM WVar8;
  LPARAM *lParam;
  
  switch(param_1) {
  case 0xc9:
    pHVar3 = GetDlgItem(hDlg_00411444,0xc9);
    if (pHVar3 != (HWND)0x0) {
      WVar8 = SendMessageW(pHVar3,0x147,0,0);
      if ((int)WVar8 < 0) {
        SendDlgItemMessageW(hDlg_00411444,0xca,0x14b,0,0);
        return;
      }
      DAT_00411578 = (HKEY)SendMessageW(pHVar3,0x150,WVar8,0);
      if (DAT_00411578 == (HKEY)0x0) {
        DAT_0041157c = (undefined4 *)0x0;
        FUN_004030b0(&lParam_00411580);
      }
      else {
        DAT_0041157c = FUN_00402440(DAT_00411578);
        if (DAT_0041157c == (undefined4 *)0x0) {
          DAT_0041157c = (undefined4 *)DAT_00411578[1].unused;
        }
        iVar4 = FUN_00403160(0x411580,(HKEY)&DAT_00411578);
        if (iVar4 == 0) {
          FUN_00402060(&DAT_00411140,(int *)&DAT_00411578);
          SendMessageW(pHVar3,0x144,WVar8,0);
          SendMessageW(pHVar3,0x14e,0,0);
          return;
        }
      }
      FUN_0040a6e0();
      SendDlgItemMessageW(hDlg_00411444,200,0x404,0,0x411580);
      FUN_0040a830();
      FUN_0040a960();
      FUN_0040af80();
      SendMessageW(hWnd_004114a4,0x468,(WPARAM)hDlg_00411444,0);
      return;
    }
    break;
  case 0xca:
    FUN_004085a0();
    return;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xdb:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
    break;
  case 0xce:
    pHVar3 = GetDlgItem(hDlg_00411444,0xce);
    if (pHVar3 != (HWND)0x0) {
      DAT_00411470 = FUN_004014e0(pHVar3);
      FUN_0040a9e0();
      return;
    }
    break;
  case 0xda:
    WVar8 = *(WPARAM *)(&DAT_0040ee90 + DAT_00411470 * 0x18);
    if ((-1 < (int)WVar8) &&
       (lParam = (LPARAM *)FUN_00402560(0x411580,WVar8), lParam != (LPARAM *)0x0)) {
      GetDlgItemTextW(hDlg_00411444,0xda,(LPWSTR)(lParam + 7),0x20);
      Msg = 0x402;
LAB_00409a65:
      SendDlgItemMessageW(hDlg_00411444,200,Msg,WVar8,(LPARAM)lParam);
      SendDlgItemMessageW(hDlg_00411444,0xca,0x14e,0xffffffff,0);
LAB_00409bde:
      SendMessageW(hWnd_004114a4,0x468,(WPARAM)hDlg_00411444,0);
    }
    break;
  case 0xdc:
    iVar4 = *(int *)(&DAT_0040ee90 + DAT_00411470 * 0x18);
    if (((-1 < iVar4) &&
        (pLVar1 = (LOGFONTW *)FUN_00402560(0x411580,iVar4), pLVar1 != (LOGFONTW *)0x0)) &&
       (pHVar3 = GetDlgItem(hDlg_00411444,0xdc), pHVar3 != (HWND)0x0)) {
      LVar5 = FUN_004014e0(pHVar3);
      iVar2 = MulDiv(LVar5,nNumerator_004114ac,0x48);
      pLVar1->lfHeight = -iVar2;
      if (iVar4 == 0) {
        iVar4 = 4;
        piVar6 = (int *)&DAT_00411594;
        iVar2 = 3;
        piVar7 = (int *)&DAT_00411590;
LAB_00409b40:
        FUN_0040aff0(pLVar1,iVar4,piVar6,iVar2,piVar7);
        DAT_00411128 = 1;
        FUN_0040aea0();
        FUN_0040aed0();
        DAT_00411128 = 0;
      }
      else {
        if (iVar4 == 1) {
          iVar4 = 6;
          piVar6 = (int *)&DAT_004115f8;
          piVar7 = (int *)&DAT_004115f4;
          iVar2 = 5;
          goto LAB_00409b40;
        }
        if (iVar4 == 2) {
          iVar4 = 8;
          piVar6 = (int *)&DAT_0041165c;
          iVar2 = 7;
          piVar7 = (int *)&DAT_00411658;
          goto LAB_00409b40;
        }
      }
      lParam = &lParam_00411580;
      WVar8 = 0;
      Msg = 0x404;
      goto LAB_00409a65;
    }
    break;
  case 0xea:
    WVar8 = *(WPARAM *)(&DAT_0040ee90 + DAT_00411470 * 0x18);
    if (((-1 < (int)WVar8) && (pHVar3 = GetDlgItem(hDlg_00411444,0xea), pHVar3 != (HWND)0x0)) &&
       (iVar4 = FUN_00402560(0x411580,WVar8), iVar4 != 0)) {
      LVar5 = FUN_004014e0(pHVar3);
      *(char *)(iVar4 + 0x1a) = (char)LVar5;
      SendDlgItemMessageW(hDlg_00411444,200,0x402,WVar8,iVar4);
      goto LAB_00409bde;
    }
    break;
  default:
    goto switchD_004098af_default;
  }
switchD_004098af_default:
  return;
}



void __cdecl FUN_00409c40(short param_1,int param_2)

{
  WPARAM wParam;
  int lParam;
  uint uVar1;
  int iVar2;
  HWND pHVar3;
  
  if (param_1 == 0x200) {
    pHVar3 = GetDlgItem(hDlg_00411444,param_2);
    FUN_00401710(pHVar3);
    return;
  }
  if ((((param_1 == 0x300) && (DAT_00411128 == 0)) &&
      (wParam = *(WPARAM *)(&DAT_0040ee90 + DAT_00411470 * 0x18), -1 < (int)wParam)) &&
     (lParam = FUN_00402560(0x411580,wParam), lParam != 0)) {
    uVar1 = SendDlgItemMessageW(hDlg_00411444,param_2,0x468,0,0);
    if (param_2 == 0xdf) {
      iVar2 = MulDiv(uVar1 & 0xffff,nNumerator_004114ac,0x48);
      *(int *)(lParam + 4) = -iVar2;
    }
    else {
      if (param_2 != 0xe4) {
        return;
      }
      iVar2 = (uVar1 & 0xffff) * 10;
      *(int *)(lParam + 8) = iVar2;
      *(int *)(lParam + 0xc) = iVar2;
    }
    SendDlgItemMessageW(hDlg_00411444,200,0x402,wParam,lParam);
    SendDlgItemMessageW(hDlg_00411444,0xca,0x14e,0xffffffff,0);
    SendMessageW(hWnd_004114a4,0x468,(WPARAM)hDlg_00411444,0);
  }
  return;
}



void __cdecl FUN_00409d60(short param_1,int param_2,WPARAM param_3,int param_4)

{
  uint uVar1;
  uint nDenominator;
  int iVar2;
  HWND pHVar3;
  int iVar4;
  
  if (param_1 == 0x200) {
    pHVar3 = GetDlgItem(hDlg_00411444,param_4);
    FUN_00401710(pHVar3);
    return;
  }
  if (param_1 != 0x300) {
    return;
  }
  if (param_2 < 0) {
    return;
  }
  if (DAT_00411128 != 0) {
    return;
  }
  uVar1 = SendDlgItemMessageW(hDlg_00411444,param_4,0x468,0,0);
  nDenominator = FUN_004025d0(0x411580,param_2);
  uVar1 = FUN_00403f50(0x411580,param_2,uVar1 & 0xffff);
  if ((int)uVar1 < 0) {
    return;
  }
  if (uVar1 == nDenominator) {
    return;
  }
  switch(param_2) {
  case 1:
    iVar4 = 2;
    break;
  default:
    goto switchD_00409def_caseD_2;
  case 4:
    iVar4 = 3;
    break;
  case 6:
    iVar4 = 5;
    break;
  case 8:
    iVar4 = 7;
  }
  iVar2 = FUN_004025d0(0x411580,iVar4);
  iVar2 = MulDiv(iVar2,uVar1,nDenominator);
  FUN_00403f50(0x411580,iVar4,iVar2);
  DAT_00411128 = 1;
  FUN_0040af00(*(int *)(&DAT_0040ee84 + DAT_00411470 * 0x18),0xd3,0xd4);
  DAT_00411128 = 0;
switchD_00409def_caseD_2:
  pHVar3 = GetDlgItem(hDlg_00411444,200);
  if (pHVar3 != (HWND)0x0) {
    SendMessageW(pHVar3,0x401,param_3,uVar1 & 0xffff);
    SendMessageW(pHVar3,0x404,0,0x411580);
  }
  SendDlgItemMessageW(hDlg_00411444,0xca,0x14e,0xffffffff,0);
  SendMessageW(hWnd_004114a4,0x468,(WPARAM)hDlg_00411444,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00409f30(void)

{
  HANDLE pvVar1;
  HFONT pHVar2;
  HWND pHVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  WPARAM wParam;
  code *pcVar7;
  LPRECT *lpRect;
  WCHAR local_ac [34];
  LOGFONTW local_68;
  WPARAM local_c;
  HWND local_8;
  
  DAT_00411474 = 1;
  FUN_00408c00();
  pcVar7 = SendDlgItemMessageW_exref;
  pvVar1 = (HANDLE)SendDlgItemMessageW(hDlg_00411444,0xe6,0x31,0,0);
  GetObjectW(pvVar1,0x5c,&local_68);
  local_68.lfWeight = 700;
  local_68.lfItalic = '\0';
  local_68.lfUnderline = '\0';
  pHVar2 = CreateFontIndirectW(&local_68);
  if (pHVar2 != (HFONT)0x0) {
    if (DAT_00411464 != (HFONT)0x0) {
      DeleteObject(DAT_00411464);
    }
    DAT_00411464 = pHVar2;
    SendDlgItemMessageW(hDlg_00411444,0xe6,0x30,(WPARAM)pHVar2,1);
  }
  local_68.lfWeight = 400;
  local_68.lfItalic = '\x01';
  pHVar2 = CreateFontIndirectW(&local_68);
  if (pHVar2 != (HFONT)0x0) {
    if (DAT_00411468 != (HFONT)0x0) {
      DeleteObject(DAT_00411468);
    }
    DAT_00411468 = pHVar2;
    SendDlgItemMessageW(hDlg_00411444,0xe7,0x30,(WPARAM)pHVar2,1);
  }
  local_68.lfItalic = '\0';
  local_68.lfUnderline = '\x01';
  pHVar2 = CreateFontIndirectW(&local_68);
  if (pHVar2 != (HFONT)0x0) {
    if (DAT_0041146c != (HFONT)0x0) {
      DeleteObject(DAT_0041146c);
    }
    DAT_0041146c = pHVar2;
    SendDlgItemMessageW(hDlg_00411444,0xe8,0x30,(WPARAM)pHVar2,1);
  }
  pvVar1 = LoadImageW(hInstance_004114a0,(LPCWSTR)0x65,1,0,0,0);
  if (pvVar1 != (HANDLE)0x0) {
    SendDlgItemMessageW(hDlg_00411444,0xcb,0xf7,1,(LPARAM)pvVar1);
  }
  pvVar1 = LoadImageW(hInstance_004114a0,(LPCWSTR)0x66,1,0,0,0);
  if (pvVar1 != (HANDLE)0x0) {
    SendDlgItemMessageW(hDlg_00411444,0xcc,0xf7,1,(LPARAM)pvVar1);
  }
  pvVar1 = LoadImageW(hInstance_004114a0,(LPCWSTR)0x67,1,0,0,0);
  if (pvVar1 != (HANDLE)0x0) {
    SendDlgItemMessageW(hDlg_00411444,0xcd,0xf7,1,(LPARAM)pvVar1);
  }
  FUN_00401400(hDlg_00411444,0xcb,0x14d);
  FUN_00401400(hDlg_00411444,0xcc,0x14e);
  FUN_00401400(hDlg_00411444,0xcd,0x14f);
  FUN_00401400(hDlg_00411444,0xe6,0x14a);
  FUN_00401400(hDlg_00411444,0xe7,0x14b);
  FUN_00401400(hDlg_00411444,0xe8,0x14c);
  DAT_00411478 = FUN_00401400(hDlg_00411444,0xd6,0);
  DAT_0041147c = FUN_00401400(hDlg_00411444,0xd8,0);
  DAT_00411480 = FUN_00401400(hDlg_00411444,0xe1,0);
  DAT_00411484 = FUN_00401400(hDlg_00411444,0xd0,0);
  DAT_00411488 = FUN_00401400(hDlg_00411444,0xd3,0);
  DAT_0041148c = FUN_00401400(hDlg_00411444,0xda,0);
  lpRect = &lprc_00411454;
  pHVar3 = GetDlgItem(hDlg_00411444,0xd6);
  BVar4 = GetWindowRect(pHVar3,(LPRECT)lpRect);
  if ((BVar4 == 0) ||
     (BVar4 = OffsetRect((LPRECT)&lprc_00411454,-(int)lprc_00411454,-DAT_00411458), BVar4 == 0)) {
    lprc_00411454 = (LPRECT)0x0;
    DAT_00411458 = 0;
    _DAT_0041145c = MulDiv(0x2e,nNumerator_004114ac,0x60);
    _DAT_00411460 = MulDiv(0x17,nNumerator_004114ac,0x60);
  }
  iVar5 = MulDiv(0xd,nNumerator_004114ac,0x60);
  _DAT_0041145c = _DAT_0041145c - iVar5;
  iVar5 = MulDiv(0xb,nNumerator_004114ac,0x60);
  _DAT_00411460 = _DAT_00411460 - iVar5;
  pHVar3 = GetDlgItem(hDlg_00411444,0xd6);
  if (pHVar3 != (HWND)0x0) {
    DAT_00411448 = FUN_00407b80(pHVar3,&lprc_00411454);
  }
  pHVar3 = GetDlgItem(hDlg_00411444,0xd8);
  if (pHVar3 != (HWND)0x0) {
    DAT_0041144c = FUN_00407b80(pHVar3,&lprc_00411454);
  }
  pHVar3 = GetDlgItem(hDlg_00411444,0xe1);
  if (pHVar3 != (HWND)0x0) {
    DAT_00411450 = FUN_00407b80(pHVar3,&lprc_00411454);
  }
  InflateRect((LPRECT)&lprc_00411454,-1,-1);
  if (DAT_00411144 == 0) {
    FUN_004030b0(&lParam_00411580);
  }
  pHVar3 = GetDlgItem(hDlg_00411444,0xce);
  local_8 = pHVar3;
  if (pHVar3 != (HWND)0x0) {
    SendMessageW(pHVar3,0x14b,0,0);
    iVar5 = 0;
    do {
      while (((iVar6 = LoadStringW(hInstance_004114a0,iVar5 + 300,local_ac,0x50), 0 < iVar6 &&
              (wParam = SendMessageW(pHVar3,0x143,0,(LPARAM)local_ac), pHVar3 = local_8,
              -1 < (int)wParam)) &&
             (SendMessageW(local_8,0x151,wParam,iVar5), pHVar3 = local_8, iVar5 == 0))) {
        SendMessageW(local_8,0x14e,wParam,0);
        iVar5 = 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x13);
    DAT_00411470 = 0;
    pcVar7 = SendDlgItemMessageW_exref;
  }
  FUN_0040a500();
  FUN_00403430();
  FUN_00402280(DAT_00411140,&DAT_00411578);
  pHVar3 = GetDlgItem(hDlg_00411444,0xc9);
  if (pHVar3 != (HWND)0x0) {
    SendMessageW(pHVar3,0x14b,0,0);
    iVar5 = FUN_00401350(&local_8,hInstance_004114a0,0x78);
    if (0 < iVar5) {
      local_c = SendMessageW(pHVar3,0x143,0,(LPARAM)local_8);
      if ((-1 < (int)local_c) && (SendMessageW(pHVar3,0x151,local_c,0), DAT_00411578 == (int *)0x0))
      {
        SendMessageW(pHVar3,0x14e,local_c,0);
      }
      HeapFree(hHeap_004114a8,0,local_8);
    }
    if (DAT_00411140 != (int *)0x0) {
      FUN_00408530(pHVar3,DAT_00411140,DAT_00411578);
    }
  }
  FUN_0040a6e0();
  (*pcVar7)(hDlg_00411444,0xdf,0x465,0,0x18);
  (*pcVar7)(hDlg_00411444,0xe4,0x465,0,0x167);
  (*pcVar7)(hDlg_00411444,200,0x404,0,&lParam_00411580);
  FUN_0040a9e0();
  FUN_0040af80();
  (*pcVar7)(hDlg_00411444,0xeb,0xf1,DAT_0041184c != 0,0);
  (*pcVar7)(hDlg_00411444,0xec,0xf1,DAT_00411850 != 0,0);
  DAT_00411474 = 0;
  return;
}



void FUN_0040a500(void)

{
  HWND pHVar1;
  HDC hdc;
  int iVar2;
  WPARAM WVar3;
  int iVar4;
  tagLOGFONTW local_90;
  WCHAR local_34 [20];
  WCHAR local_c [4];
  
  pHVar1 = GetDlgItem(hDlg_00411444,0xda);
  if (pHVar1 != (HWND)0x0) {
    hdc = GetDC((HWND)0x0);
    if (hdc != (HDC)0x0) {
      local_90.lfCharSet = '\0';
      local_90.lfFaceName[0] = L'\0';
      local_90.lfPitchAndFamily = '\0';
      SendMessageW(pHVar1,0x14b,0,0);
      EnumFontFamiliesExW(hdc,&local_90,lpProc_00408bc0,(LPARAM)pHVar1,0);
      ReleaseDC((HWND)0x0,hdc);
    }
  }
  pHVar1 = GetDlgItem(hDlg_00411444,0xdc);
  if (pHVar1 != (HWND)0x0) {
    SendMessageW(pHVar1,0x14b,0,0);
    iVar4 = 6;
    do {
      iVar2 = wsprintfW(local_c,(LPCWSTR)&param_2_0040ea20,iVar4);
      if (0 < iVar2) {
        WVar3 = SendMessageW(pHVar1,0x143,0,(LPARAM)local_c);
        if (-1 < (int)WVar3) {
          SendMessageW(pHVar1,0x151,WVar3,iVar4);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x19);
  }
  pHVar1 = GetDlgItem(hDlg_00411444,0xea);
  if (pHVar1 != (HWND)0x0) {
    SendMessageW(pHVar1,0x14b,0,0);
    iVar4 = LoadStringW(hInstance_004114a0,0x150,local_34,0x14);
    if (0 < iVar4) {
      WVar3 = SendMessageW(pHVar1,0x143,0,(LPARAM)local_34);
      if (-1 < (int)WVar3) {
        SendMessageW(pHVar1,0x151,WVar3,0);
      }
    }
    iVar4 = LoadStringW(hInstance_004114a0,0x151,local_34,0x14);
    if (0 < iVar4) {
      WVar3 = SendMessageW(pHVar1,0x143,0,(LPARAM)local_34);
      if (-1 < (int)WVar3) {
        SendMessageW(pHVar1,0x151,WVar3,3);
      }
    }
    iVar4 = LoadStringW(hInstance_004114a0,0x152,local_34,0x14);
    if (0 < iVar4) {
      WVar3 = SendMessageW(pHVar1,0x143,0,(LPARAM)local_34);
      if (-1 < (int)WVar3) {
        SendMessageW(pHVar1,0x151,WVar3,5);
      }
    }
    iVar4 = LoadStringW(hInstance_004114a0,0x153,local_34,0x14);
    if (0 < iVar4) {
      WVar3 = SendMessageW(pHVar1,0x143,0,(LPARAM)local_34);
      if (-1 < (int)WVar3) {
        SendMessageW(pHVar1,0x151,WVar3,6);
      }
    }
  }
  return;
}



void FUN_0040a6e0(void)

{
  HWND pHVar1;
  BOOL bEnable;
  int bEnable_00;
  BOOL BVar2;
  
  pHVar1 = GetDlgItem(hDlg_00411444,0xca);
  if (pHVar1 != (HWND)0x0) {
    SendMessageW(pHVar1,0x14b,0,0);
    if (DAT_00411578 == 0) {
      bEnable_00 = DAT_00411578;
      pHVar1 = GetDlgItem(hDlg_00411444,0xcc);
      EnableWindow(pHVar1,bEnable_00);
      BVar2 = 0;
      pHVar1 = GetDlgItem(hDlg_00411444,0xcd);
      EnableWindow(pHVar1,BVar2);
      return;
    }
    bEnable = FUN_00408530(pHVar1,*(int **)(DAT_00411578 + 4),DAT_0041157c);
    BVar2 = bEnable;
    pHVar1 = GetDlgItem(hDlg_00411444,0xcc);
    EnableWindow(pHVar1,BVar2);
    pHVar1 = GetDlgItem(hDlg_00411444,0xcd);
    EnableWindow(pHVar1,bEnable);
  }
  return;
}



undefined4 __cdecl FUN_0040a790(int param_1)

{
  HWND hWnd;
  WPARAM WVar1;
  LRESULT lParam;
  LRESULT LVar2;
  
  hWnd = GetDlgItem(hDlg_00411444,param_1);
  if (hWnd != (HWND)0x0) {
    WVar1 = SendMessageW(hWnd,0x147,0,0);
    if (-1 < (int)WVar1) {
      lParam = SendMessageW(hWnd,0x150,WVar1,0);
      if (lParam != 0) {
        LVar2 = SendMessageW(hWnd,0x144,WVar1,0);
        if (LVar2 != -1) {
          WVar1 = SendMessageW(hWnd,0x143,0,*(LPARAM *)(lParam + 8));
          if (-1 < (int)WVar1) {
            SendMessageW(hWnd,0x151,WVar1,lParam);
            SendMessageW(hWnd,0x14e,WVar1,0);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



void FUN_0040a830(void)

{
  SendDlgItemMessageW(hDlg_00411444,0xeb,0xf1,(uint)(DAT_0041184c != 0),0);
  SendDlgItemMessageW(hDlg_00411444,0xec,0xf1,(uint)(DAT_00411850 != 0),0);
  return;
}



void FUN_0040a880(void)

{
  SendDlgItemMessageW(hDlg_00411444,0xc9,0x14e,0xffffffff,0);
  SendDlgItemMessageW(hDlg_00411444,0xca,0x14b,0,0);
  return;
}



void __cdecl FUN_0040a8c0(int param_1,int param_2,int param_3)

{
  HWND pHVar1;
  HBRUSH ho;
  BOOL BVar2;
  
  pHVar1 = GetDlgItem(hDlg_00411444,param_1);
  if (pHVar1 != (HWND)0x0) {
    if (-1 < param_3) {
      ho = CreateSolidBrush((&color_004117d0)[param_3]);
      FUN_00407d20(pHVar1,(RECT *)&lprc_00411454,(HGDIOBJ)(&DAT_00411448)[param_2],ho);
      DeleteObject(ho);
      EnableWindow(pHVar1,1);
      BVar2 = 1;
      pHVar1 = GetDlgItem(hDlg_00411444,param_1 + -1);
      EnableWindow(pHVar1,BVar2);
      return;
    }
    FUN_00407c60(pHVar1);
    BVar2 = 0;
    pHVar1 = GetDlgItem(hDlg_00411444,param_1 + -1);
    EnableWindow(pHVar1,BVar2);
  }
  return;
}



void FUN_0040a960(void)

{
  undefined8 uVar1;
  int iVar2;
  int iStack_18;
  
  iVar2 = *(int *)(&DAT_0040ee8c + DAT_00411470 * 0x18);
  uVar1 = *(undefined8 *)(&DAT_0040ee90 + DAT_00411470 * 0x18);
  FUN_0040a8c0(0xd6,0,*(int *)(&DAT_0040ee88 + DAT_00411470 * 0x18));
  FUN_0040a8c0(0xd8,1,iVar2);
  iStack_18 = (int)((ulonglong)uVar1 >> 0x20);
  FUN_0040a8c0(0xe1,2,iStack_18);
  return;
}



void FUN_0040a9e0(void)

{
  undefined8 uVar1;
  int iVar2;
  HWND pHVar3;
  uint uVar4;
  uint uVar5;
  int local_1c;
  
  iVar2 = *(int *)(&DAT_0040ee84 + DAT_00411470 * 0x18);
  uVar1 = *(undefined8 *)(&DAT_0040ee90 + DAT_00411470 * 0x18);
  uVar4 = (uint)(-1 < *(int *)(&DAT_0040ee80 + DAT_00411470 * 0x18));
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xcf);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xd0);
  EnableWindow(pHVar3,uVar5);
  pHVar3 = GetDlgItem(hDlg_00411444,0xd1);
  EnableWindow(pHVar3,uVar4);
  uVar4 = (uint)(-1 < iVar2);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xd2);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xd3);
  EnableWindow(pHVar3,uVar5);
  pHVar3 = GetDlgItem(hDlg_00411444,0xd4);
  EnableWindow(pHVar3,uVar4);
  local_1c = (int)uVar1;
  uVar4 = (uint)(-1 < local_1c);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xd9);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xda);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xdb);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xdc);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xdd);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xde);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xdf);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xe2);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xe3);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xe4);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xe5);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xe6);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xe7);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xe5);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xe6);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xe7);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xe8);
  EnableWindow(pHVar3,uVar5);
  uVar5 = uVar4;
  pHVar3 = GetDlgItem(hDlg_00411444,0xe9);
  EnableWindow(pHVar3,uVar5);
  pHVar3 = GetDlgItem(hDlg_00411444,0xea);
  EnableWindow(pHVar3,uVar4);
  FUN_0040a960();
  FUN_0040af80();
  FUN_0040b060();
  return;
}



void FUN_0040ac00(void)

{
  int *piVar1;
  HWND pHVar2;
  WPARAM WVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  WCHAR local_10 [4];
  HWND local_8;
  
  if (-1 < *(int *)(&DAT_0040ee90 + DAT_00411470 * 0x18)) {
    piVar1 = (int *)FUN_00402560(0x411580,*(int *)(&DAT_0040ee90 + DAT_00411470 * 0x18));
    if (piVar1 != (int *)0x0) {
      pHVar2 = GetDlgItem(hDlg_00411444,0xda);
      if (pHVar2 != (HWND)0x0) {
        WVar3 = SendMessageW(pHVar2,0x158,0xffffffff,(LPARAM)(piVar1 + 7));
        if ((int)WVar3 < -1) {
          WVar3 = 0xffffffff;
        }
        SendMessageW(pHVar2,0x14e,WVar3,0);
      }
      local_8 = GetDlgItem(hDlg_00411444,0xdc);
      if (local_8 != (HWND)0x0) {
        iVar4 = MulDiv(*piVar1,0x48,nNumerator_004114ac);
        iVar6 = -iVar4;
        iVar5 = wsprintfW(local_10,(LPCWSTR)&param_2_0040ea20,iVar6);
        pHVar2 = local_8;
        if (iVar5 < 1) {
          local_10[0] = L'8';
          local_10[1] = L'\0';
        }
        if (iVar6 < 6) {
          WVar3 = 0;
        }
        else if (iVar4 == -0x18 || iVar6 < 0x18) {
          WVar3 = SendMessageW(local_8,0x158,0xffffffff,(LPARAM)local_10);
          if ((int)WVar3 < 0) {
            WVar3 = 2;
          }
        }
        else {
          WVar3 = 0x12;
        }
        SendMessageW(pHVar2,0x14e,WVar3,0);
      }
      iVar4 = MulDiv(piVar1[1],0x48,nNumerator_004114ac);
      SetDlgItemInt(hDlg_00411444,0xde,-iVar4,0);
      SetDlgItemInt(hDlg_00411444,0xe3,piVar1[2] / 10,0);
      SendDlgItemMessageW(hDlg_00411444,0xe6,0xf1,(uint)(699 < piVar1[4]),0);
      SendDlgItemMessageW(hDlg_00411444,0xe7,0xf1,(uint)((char)piVar1[5] != '\0'),0);
      SendDlgItemMessageW(hDlg_00411444,0xe8,0xf1,(uint)(*(char *)((int)piVar1 + 0x15) != '\0'),0);
      pHVar2 = GetDlgItem(hDlg_00411444,0xea);
      if ((pHVar2 != (HWND)0x0) &&
         (iVar4 = FUN_004016b0(pHVar2,(uint)*(byte *)((int)piVar1 + 0x1a)), iVar4 == 0)) {
        SendMessageW(pHVar2,0x14e,0,0);
      }
    }
    return;
  }
  SendDlgItemMessageW(hDlg_00411444,0xda,0x14e,0xffffffff,0);
  SendDlgItemMessageW(hDlg_00411444,0xdc,0x14e,0xffffffff,0);
  SendDlgItemMessageW(hDlg_00411444,0xea,0x14e,0xffffffff,0);
  SendDlgItemMessageW(hDlg_00411444,0xe6,0xf1,0,0);
  SendDlgItemMessageW(hDlg_00411444,0xe7,0xf1,0,0);
  SendDlgItemMessageW(hDlg_00411444,0xe8,0xf1,0,0);
  SetDlgItemTextW(hDlg_00411444,0xde,(LPCWSTR)&lpString_0040eab0);
  SetDlgItemTextW(hDlg_00411444,0xe3,(LPCWSTR)&lpString_0040eab0);
  return;
}



void FUN_0040aea0(void)

{
  FUN_0040af00(*(int *)(&DAT_0040ee80 + DAT_00411470 * 0x18),0xd0,0xd1);
  return;
}



void FUN_0040aed0(void)

{
  FUN_0040af00(*(int *)(&DAT_0040ee84 + DAT_00411470 * 0x18),0xd3,0xd4);
  return;
}



void __cdecl FUN_0040af00(int param_1,int param_2,int param_3)

{
  UINT uValue;
  
  if (param_1 < 0) {
    SetDlgItemTextW(hDlg_00411444,param_2,(LPCWSTR)&lpString_0040eab0);
    return;
  }
  SendDlgItemMessageW(hDlg_00411444,param_3,0x465,0,
                      CONCAT22(*(undefined2 *)(&DAT_004110b8 + param_1 * 0xc),
                               *(undefined2 *)(&DAT_004110bc + param_1 * 0xc)));
  uValue = FUN_004025d0(0x411580,param_1);
  SetDlgItemInt(hDlg_00411444,param_2,uValue,0);
  return;
}



void FUN_0040af80(void)

{
  DAT_00411128 = 1;
  FUN_0040af00(*(int *)(&DAT_0040ee80 + DAT_00411470 * 0x18),0xd0,0xd1);
  FUN_0040af00(*(int *)(&DAT_0040ee84 + DAT_00411470 * 0x18),0xd3,0xd4);
  FUN_0040ac00();
  DAT_00411128 = 0;
  return;
}



void __cdecl FUN_0040aff0(LOGFONTW *param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  int iVar1;
  int nNumerator;
  int iVar2;
  
  iVar2 = *param_3;
  FUN_00404220(param_1,param_2);
  iVar1 = *(int *)(&DAT_004110c0 + param_2 * 0xc);
  nNumerator = *param_3;
  if (iVar1 < *param_3) {
    *param_3 = iVar1;
    nNumerator = iVar1;
  }
  iVar1 = *(int *)(&DAT_004110b8 + param_2 * 0xc);
  if (nNumerator < iVar1) {
    *param_3 = iVar1;
    nNumerator = iVar1;
  }
  iVar2 = MulDiv(*param_5,nNumerator,iVar2);
  *param_5 = iVar2;
  if (*(int *)(&DAT_004110bc + param_4 * 0xc) < iVar2) {
    *param_5 = *(int *)(&DAT_004110bc + param_4 * 0xc);
  }
  return;
}



void FUN_0040b060(void)

{
  int iVar1;
  WCHAR local_3c [28];
  
  iVar1 = *(int *)(&DAT_0040ee88 + DAT_00411470 * 0x18);
  if (-1 < iVar1) {
    iVar1 = wsprintfW(local_3c,L"%d - %s",iVar1,(&PTR_u_Scrollbar_00411000)[iVar1]);
    if (4 < iVar1) {
      FUN_00401a10(hDlg_00411444,0xd6,DAT_00411478,local_3c);
    }
  }
  iVar1 = *(int *)(&DAT_0040ee8c + DAT_00411470 * 0x18);
  if (-1 < iVar1) {
    iVar1 = wsprintfW(local_3c,L"%d - %s",iVar1,(&PTR_u_Scrollbar_00411000)[iVar1]);
    if (4 < iVar1) {
      FUN_00401a10(hDlg_00411444,0xd8,DAT_0041147c,local_3c);
    }
  }
  iVar1 = *(int *)(&DAT_0040ee94 + DAT_00411470 * 0x18);
  if (-1 < iVar1) {
    iVar1 = wsprintfW(local_3c,L"%d - %s",iVar1,(&PTR_u_Scrollbar_00411000)[iVar1]);
    if (4 < iVar1) {
      FUN_00401a10(hDlg_00411444,0xe1,DAT_00411480,local_3c);
    }
  }
  iVar1 = *(int *)(&DAT_0040ee80 + DAT_00411470 * 0x18);
  if (-1 < iVar1) {
    iVar1 = wsprintfW(local_3c,L"%d - %s",iVar1,(&PTR_u_BorderWidth_0041107c)[iVar1]);
    if (4 < iVar1) {
      FUN_00401a10(hDlg_00411444,0xd0,DAT_00411484,local_3c);
    }
  }
  iVar1 = *(int *)(&DAT_0040ee84 + DAT_00411470 * 0x18);
  if (-1 < iVar1) {
    iVar1 = wsprintfW(local_3c,L"%d - %s",iVar1,(&PTR_u_BorderWidth_0041107c)[iVar1]);
    if (4 < iVar1) {
      FUN_00401a10(hDlg_00411444,0xd3,DAT_00411488,local_3c);
    }
  }
  iVar1 = *(int *)(&DAT_0040ee90 + DAT_00411470 * 0x18);
  if (-1 < iVar1) {
    iVar1 = wsprintfW(local_3c,L"%d - %s",iVar1,(&PTR_u_CaptionFont_004110a0)[iVar1]);
    if (4 < iVar1) {
      FUN_00401a10(hDlg_00411444,0xda,DAT_0041148c,local_3c);
    }
  }
  return;
}



// lpDialogFunc parameter of DialogBoxParamW
// 

undefined4 lpDialogFunc_0040b240(HWND param_1,int param_2,uint param_3,int param_4)

{
  HWND pHVar1;
  LRESULT LVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  WPARAM wParam;
  PVOID pvVar6;
  
  if (param_2 != 0x1a) {
    if (param_2 == 0x110) {
      hDlg_00411490 = param_1;
      DAT_00411494 = param_4;
      FUN_0040b8c0(0xc9);
      FUN_0040b8c0(0xcc);
      SendDlgItemMessageW(hDlg_00411490,200,0xf1,*(WPARAM *)(DAT_00411494 + 0x1c),0);
      pHVar1 = GetDlgItem(hDlg_00411490,0xc9);
      EnableWindow(pHVar1,*(BOOL *)(DAT_00411494 + 0x1c));
      if ((pvParam_0041153c == (PVOID)0x0) ||
         (iVar3 = FUN_004016b0(pHVar1,(int)pvParam_00411540), iVar3 == 0)) {
        SendMessageW(pHVar1,0x14e,0,0);
      }
      SendDlgItemMessageW(hDlg_00411490,0xca,0xf1,*(WPARAM *)(DAT_00411494 + 0x24),0);
      SendDlgItemMessageW(hDlg_00411490,0xcb,0xf1,*(WPARAM *)(DAT_00411494 + 0x28),0);
      pHVar1 = GetDlgItem(hDlg_00411490,0xcc);
      EnableWindow(pHVar1,*(BOOL *)(DAT_00411494 + 0x28));
      if ((pvParam_00411548 == (PVOID)0x0) ||
         (iVar3 = FUN_004016b0(pHVar1,(int)pvParam_0041154c), iVar3 == 0)) {
        SendMessageW(pHVar1,0x14e,0,0);
      }
      SendDlgItemMessageW(hDlg_00411490,0xcd,0xf1,*(WPARAM *)(DAT_00411494 + 0x30),0);
      SendDlgItemMessageW(hDlg_00411490,0xce,0xf1,*(WPARAM *)(DAT_00411494 + 0x34),0);
      SendDlgItemMessageW(hDlg_00411490,0xcf,0xf1,*(WPARAM *)(DAT_00411494 + 0x38),0);
      return 1;
    }
    if (param_2 != 0x111) {
      return 0;
    }
    if (param_3 >> 0x10 != 0) {
      if (param_3 >> 0x10 != 1) {
        return 1;
      }
      uVar5 = param_3 & 0xffff;
      pHVar1 = GetDlgItem(hDlg_00411490,uVar5);
      if (uVar5 != 0xc9) {
        if (uVar5 != 0xcc) {
          return 1;
        }
        pvParam_0041154c = (PVOID)FUN_004014e0(pHVar1);
        return 1;
      }
      pvParam_00411540 = (PVOID)FUN_004014e0(pHVar1);
      return 1;
    }
    uVar5 = param_3 & 0xffff;
    switch(uVar5) {
    case 1:
    case 2:
      EndDialog(hDlg_00411490,1);
      return 1;
    default:
      goto switchD_0040b2e6_caseD_3;
    case 200:
      LVar2 = SendDlgItemMessageW(hDlg_00411490,uVar5,0xf0,0,0);
      uVar5 = (uint)(LVar2 == 1);
      *(uint *)(DAT_00411494 + 0x1c) = uVar5;
      break;
    case 0xca:
      LVar2 = SendDlgItemMessageW(hDlg_00411490,uVar5,0xf0,0,0);
      *(uint *)(DAT_00411494 + 0x24) = (uint)(LVar2 == 1);
      return 1;
    case 0xcb:
      LVar2 = SendDlgItemMessageW(hDlg_00411490,uVar5,0xf0,0,0);
      uVar5 = (uint)(LVar2 == 1);
      *(uint *)(DAT_00411494 + 0x28) = uVar5;
      iVar3 = 0xcc;
      goto LAB_0040b603;
    case 0xcd:
      LVar2 = SendDlgItemMessageW(hDlg_00411490,uVar5,0xf0,0,0);
      *(uint *)(DAT_00411494 + 0x30) = (uint)(LVar2 == 1);
      return 1;
    case 0xce:
      LVar2 = SendDlgItemMessageW(hDlg_00411490,uVar5,0xf0,0,0);
      *(uint *)(DAT_00411494 + 0x34) = (uint)(LVar2 == 1);
      return 1;
    case 0xcf:
      LVar2 = SendDlgItemMessageW(hDlg_00411490,uVar5,0xf0,0,0);
      *(uint *)(DAT_00411494 + 0x38) = (uint)(LVar2 == 1);
      return 1;
    }
LAB_0040b5fe:
    iVar3 = 0xc9;
LAB_0040b603:
    pHVar1 = GetDlgItem(hDlg_00411490,iVar3);
    EnableWindow(pHVar1,uVar5);
    return 1;
  }
  switch(param_3) {
  case 0x1003:
    BVar4 = SystemParametersInfoW(0x1002,0,(PVOID)(DAT_00411494 + 0x1c),0);
    if (BVar4 != 0) {
      SendDlgItemMessageW(hDlg_00411490,200,0xf1,*(WPARAM *)(DAT_00411494 + 0x1c),0);
    }
    uVar5 = *(uint *)(DAT_00411494 + 0x1c);
    goto LAB_0040b5fe;
  default:
    goto switchD_0040b2e6_caseD_3;
  case 0x1005:
    BVar4 = SystemParametersInfoW(0x1004,0,(PVOID)(DAT_00411494 + 0x30),0);
    if (BVar4 == 0) {
      return 1;
    }
    wParam = *(WPARAM *)(DAT_00411494 + 0x30);
    iVar3 = 0xcd;
    break;
  case 0x1007:
    BVar4 = SystemParametersInfoW(0x1006,0,(PVOID)(DAT_00411494 + 0x34),0);
    if (BVar4 == 0) {
      return 1;
    }
    wParam = *(WPARAM *)(DAT_00411494 + 0x34);
    iVar3 = 0xce;
    break;
  case 0x1013:
    BVar4 = SystemParametersInfoW(0x1012,0,(PVOID)(DAT_00411494 + 0x20),0);
    if (BVar4 == 0) {
      return 1;
    }
    iVar3 = 0xc9;
    pvVar6 = pvParam_00411540;
LAB_0040b64b:
    pHVar1 = GetDlgItem(hDlg_00411490,iVar3);
    FUN_004016b0(pHVar1,(int)pvVar6);
    return 1;
  case 0x1015:
    BVar4 = SystemParametersInfoW(0x1014,0,(PVOID)(DAT_00411494 + 0x24),0);
    if (BVar4 == 0) {
      return 1;
    }
    wParam = *(WPARAM *)(DAT_00411494 + 0x24);
    iVar3 = 0xca;
    break;
  case 0x1017:
    BVar4 = SystemParametersInfoW(0x1016,0,(PVOID)(DAT_00411494 + 0x28),0);
    if (BVar4 != 0) {
      SendDlgItemMessageW(hDlg_00411490,0xcb,0xf1,*(WPARAM *)(DAT_00411494 + 0x28),0);
    }
    uVar5 = *(uint *)(DAT_00411494 + 0x28);
    iVar3 = 0xcc;
    goto LAB_0040b603;
  case 0x1019:
    BVar4 = SystemParametersInfoW(0x1018,0,(PVOID)(DAT_00411494 + 0x2c),0);
    if (BVar4 != 0) {
      iVar3 = 0xcc;
      pvVar6 = pvParam_0041154c;
      goto LAB_0040b64b;
    }
    goto switchD_0040b2e6_caseD_3;
  }
  SendDlgItemMessageW(hDlg_00411490,iVar3,0xf1,wParam,0);
switchD_0040b2e6_caseD_3:
  return 1;
}



void __cdecl FUN_0040b8c0(int param_1)

{
  HWND hWnd;
  int iVar1;
  WPARAM WVar2;
  WCHAR local_2c [20];
  
  hWnd = GetDlgItem(hDlg_00411490,param_1);
  if (hWnd != (HWND)0x0) {
    SendMessageW(hWnd,0x14b,0,0);
    iVar1 = LoadStringW(hInstance_004114a0,700,local_2c,0x14);
    if ((0 < iVar1) && (WVar2 = SendMessageW(hWnd,0x143,0,(LPARAM)local_2c), -1 < (int)WVar2)) {
      SendMessageW(hWnd,0x151,WVar2,0);
    }
    iVar1 = LoadStringW(hInstance_004114a0,0x2bd,local_2c,0x14);
    if ((0 < iVar1) && (WVar2 = SendMessageW(hWnd,0x143,0,(LPARAM)local_2c), -1 < (int)WVar2)) {
      SendMessageW(hWnd,0x151,WVar2,1);
    }
  }
  return;
}



undefined4 FUN_0040b970(HWND param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  WPARAM WVar2;
  uint uVar3;
  HWND pHVar4;
  BOOL BVar5;
  PVOID pvVar6;
  WCHAR local_2c [20];
  
  switch(param_2) {
  case 0x1a:
    DAT_0041149c = 0;
    if (param_3 < 0x1004) {
      if (param_3 == 0x1003) {
        BVar5 = SystemParametersInfoW(0x1002,0,&pvParam_0041153c,0);
        if (BVar5 != 0) {
          DAT_004114dc = pvParam_0041153c;
          DAT_0041149c = 1;
          return 0;
        }
      }
      else {
        switch(param_3) {
        case 0:
          iVar1 = FUN_00404d90();
          if (iVar1 != 0) {
            SendDlgItemMessageW(hWndParent_00411498,0xce,0xf1,(uint)(lpData_0041152c != (BYTE *)0x0)
                                ,0);
            DAT_004114cc = lpData_0041152c;
            DAT_0041149c = 1;
            return 0;
          }
          break;
        case 0x1c:
          BVar5 = SystemParametersInfoW(0x1b,0,&pvParam_0041156c,0);
          if (BVar5 != 0) {
            SendDlgItemMessageW(hWndParent_00411498,0xd9,0xf1,(uint)(pvParam_0041156c != (PVOID)0x0)
                                ,0);
            DAT_0041150c = pvParam_0041156c;
            DAT_0041149c = 1;
            return 0;
          }
          break;
        case 0x25:
          BVar5 = SystemParametersInfoW(0x26,0,&pvParam_0041155c,0);
          if (BVar5 != 0) {
            SendDlgItemMessageW(hWndParent_00411498,0xd5,0xf1,(uint)(pvParam_0041155c != (PVOID)0x0)
                                ,0);
            DAT_004114fc = pvParam_0041155c;
            DAT_0041149c = 1;
            return 0;
          }
          break;
        case 0x2a:
          iVar1 = FUN_00404e20();
          if (iVar1 != 0) {
            SendDlgItemMessageW(hWndParent_00411498,0xc9,0x467,0,dwInitParam_00411520);
            DAT_004114c0 = dwInitParam_00411520;
            BVar5 = SystemParametersInfoW(0xd,0,&pvParam_00411524,0);
            if (BVar5 != 0) {
              pvParam_00411524 = pvParam_00411524 - dwInitParam_00411520;
              SendDlgItemMessageW(hWndParent_00411498,0xcb,0x467,0,pvParam_00411524);
              DAT_004114c4 = pvParam_00411524;
            }
            BVar5 = SystemParametersInfoW(0x18,0,&pvParam_00411528,0);
            if (BVar5 != 0) {
              pvParam_00411528 = pvParam_00411528 - dwInitParam_00411520;
              SendDlgItemMessageW(hWndParent_00411498,0xcd,0x467,0,pvParam_00411528);
              DAT_004114c8 = pvParam_00411528;
              DAT_0041149c = 1;
              return 0;
            }
          }
          break;
        case 0x43:
          iVar1 = FUN_00404de0();
          if (iVar1 != 0) {
            SendDlgItemMessageW(hWndParent_00411498,0xda,0xf1,(uint)(DAT_00411570 != 0),0);
            DAT_00411510 = DAT_00411570;
            DAT_0041149c = 1;
            return 0;
          }
          break;
        case 0x4b:
          BVar5 = SystemParametersInfoW(0x4a,0,&bEnable_00411560,0);
          if (BVar5 != 0) {
            SendDlgItemMessageW(hWndParent_00411498,0xd6,0xf1,(uint)(bEnable_00411560 != (PVOID)0x0)
                                ,0);
            DAT_00411500 = bEnable_00411560;
            DAT_0041149c = 1;
            return 0;
          }
        }
      }
    }
    else if (param_3 < 0x200c) {
      if (param_3 == 0x200b) {
        BVar5 = SystemParametersInfoW(0x200a,0,&pvParam_00411564,0);
        if (BVar5 != 0) {
          pvVar6 = pvParam_00411564;
          pHVar4 = GetDlgItem(hWndParent_00411498,0xd7);
          iVar1 = FUN_004016b0(pHVar4,(int)pvVar6);
          if (iVar1 != 0) {
            DAT_00411504 = pvParam_00411564;
          }
        }
      }
      else {
        switch(param_3) {
        case 0x1005:
          BVar5 = SystemParametersInfoW(0x1004,0,&pvParam_00411550,0);
          if (BVar5 != 0) {
            DAT_004114f0 = pvParam_00411550;
            DAT_0041149c = 1;
            return 0;
          }
          break;
        case 0x1007:
          BVar5 = SystemParametersInfoW(0x1006,0,&pvParam_00411554,0);
          if (BVar5 != 0) {
            DAT_004114f4 = pvParam_00411554;
            DAT_0041149c = 1;
            return 0;
          }
          break;
        case 0x100b:
          BVar5 = SystemParametersInfoW(0x100a,0,&pvParam_00411568,0);
          if (BVar5 != 0) {
            SendDlgItemMessageW(hWndParent_00411498,0xd8,0xf1,(uint)(pvParam_00411568 != (PVOID)0x0)
                                ,0);
            DAT_00411508 = pvParam_00411568;
            DAT_0041149c = 1;
            return 0;
          }
          break;
        case 0x1013:
          BVar5 = SystemParametersInfoW(0x1012,0,&pvParam_00411540,0);
          if (BVar5 != 0) {
            DAT_004114e0 = pvParam_00411540;
            DAT_0041149c = 1;
            return 0;
          }
          break;
        case 0x1015:
          BVar5 = SystemParametersInfoW(0x1014,0,&pvParam_00411544,0);
          if (BVar5 != 0) {
            DAT_004114e4 = pvParam_00411544;
            DAT_0041149c = 1;
            return 0;
          }
          break;
        case 0x1017:
          BVar5 = SystemParametersInfoW(0x1016,0,&pvParam_00411548,0);
          if (BVar5 != 0) {
            DAT_004114e8 = pvParam_00411548;
            DAT_0041149c = 1;
            return 0;
          }
          break;
        case 0x1019:
          BVar5 = SystemParametersInfoW(0x1018,0,&pvParam_0041154c,0);
          if (BVar5 != 0) {
            DAT_004114ec = pvParam_0041154c;
            DAT_0041149c = 1;
            return 0;
          }
          break;
        case 0x101b:
          BVar5 = SystemParametersInfoW(0x101a,0,&pvParam_00411538,0);
          if (BVar5 != 0) {
            SendDlgItemMessageW(hWndParent_00411498,0xd4,0xf1,(uint)(pvParam_00411538 != (PVOID)0x0)
                                ,0);
            DAT_004114d8 = pvParam_00411538;
            DAT_0041149c = 1;
            return 0;
          }
          break;
        case 0x1025:
          BVar5 = SystemParametersInfoW(0x1024,0,&pvParam_00411534,0);
          if (BVar5 != 0) {
            SendDlgItemMessageW(hWndParent_00411498,0xd3,0xf1,(uint)(pvParam_00411534 != (PVOID)0x0)
                                ,0);
            DAT_004114d4 = pvParam_00411534;
            DAT_0041149c = 1;
            return 0;
          }
          break;
        case 0x103f:
          BVar5 = SystemParametersInfoW(0x103e,0,&bEnable_00411530,0);
          if (BVar5 != 0) {
            SendDlgItemMessageW(hWndParent_00411498,0xd1,0xf1,(uint)(bEnable_00411530 != (PVOID)0x0)
                                ,0);
            DAT_004114d0 = bEnable_00411530;
          }
          FUN_0040c4a0();
          DAT_0041149c = 1;
          return 0;
        }
      }
    }
    DAT_0041149c = 1;
    break;
  case 0x4e:
    if (*(int *)(param_4 + 8) == -0xca) {
      FUN_004043c0();
    }
    else if (*(int *)(param_4 + 8) != -0xc9) {
      return 0;
    }
    SetWindowLongW(param_1,0,0);
    return 1;
  case 0x110:
    hWndParent_00411498 = param_1;
    FUN_00404960();
    SendDlgItemMessageW(hWndParent_00411498,0xc9,0x465,0,0x100048);
    SendDlgItemMessageW(hWndParent_00411498,0xcb,0x465,0,0x96);
    SendDlgItemMessageW(hWndParent_00411498,0xcd,0x465,0,0x96);
    pHVar4 = GetDlgItem(hWndParent_00411498,0xd7);
    if (pHVar4 != (HWND)0x0) {
      SendMessageW(pHVar4,0x14b,0,0);
      iVar1 = LoadStringW(hInstance_004114a0,0x150,local_2c,0x14);
      if ((0 < iVar1) && (WVar2 = SendMessageW(pHVar4,0x143,0,(LPARAM)local_2c), -1 < (int)WVar2)) {
        SendMessageW(pHVar4,0x151,WVar2,1);
      }
      iVar1 = LoadStringW(hInstance_004114a0,0x152,local_2c,0x14);
      if ((0 < iVar1) && (WVar2 = SendMessageW(pHVar4,0x143,0,(LPARAM)local_2c), -1 < (int)WVar2)) {
        SendMessageW(pHVar4,0x151,WVar2,2);
      }
    }
    FUN_0040c710();
    FUN_00401400(hWndParent_00411498,0xd3,0x2be);
    FUN_00401400(hWndParent_00411498,0xd8,0x2bf);
    FUN_00401400(hWndParent_00411498,0xd9,0x2c0);
    FUN_00401400(hWndParent_00411498,0xda,0x2c1);
    return 0;
  case 0x111:
    uVar3 = param_3 >> 0x10;
    if (uVar3 < 0x201) {
      if (uVar3 == 0x200) {
        pHVar4 = GetDlgItem(hWndParent_00411498,param_3 + 1 & 0xffff);
        FUN_00401710(pHVar4);
        return 0;
      }
      if (uVar3 == 0) {
        FUN_0040c500((ushort)param_3);
        return 0;
      }
      if ((uVar3 == 1) &&
         (pHVar4 = GetDlgItem(hWndParent_00411498,param_3 & 0xffff), (ushort)param_3 == 0xd7)) {
        pvParam_00411564 = (PVOID)FUN_004014e0(pHVar4);
LAB_0040bc19:
        SendMessageW(hWnd_004114a4,0x468,(WPARAM)hWndParent_00411498,0);
        return 0;
      }
    }
    else if ((uVar3 == 0x300) && (DAT_0041149c != 0)) {
      uVar3 = param_3 & 0xffff;
      if (uVar3 == 200) {
        uVar3 = SendDlgItemMessageW(hWndParent_00411498,0xc9,0x468,0,0);
        dwInitParam_00411520 = uVar3 & 0xffff;
      }
      else if (uVar3 == 0xca) {
        uVar3 = SendDlgItemMessageW(hWndParent_00411498,0xcb,0x468,0,0);
        pvParam_00411524 = uVar3 & 0xffff;
      }
      else {
        if (uVar3 != 0xcc) {
          return 0;
        }
        uVar3 = SendDlgItemMessageW(hWndParent_00411498,0xcd,0x468,0,0);
        pvParam_00411528 = uVar3 & 0xffff;
      }
      goto LAB_0040bc19;
    }
  }
  return 0;
}



void FUN_0040c4a0(void)

{
  HWND pHVar1;
  PVOID pvVar2;
  
  pvVar2 = bEnable_00411530;
  pHVar1 = GetDlgItem(hWndParent_00411498,0xd3);
  EnableWindow(pHVar1,(BOOL)pvVar2);
  pvVar2 = bEnable_00411530;
  pHVar1 = GetDlgItem(hWndParent_00411498,0xd4);
  EnableWindow(pHVar1,(BOOL)pvVar2);
  pvVar2 = bEnable_00411530;
  pHVar1 = GetDlgItem(hWndParent_00411498,0xd2);
  EnableWindow(pHVar1,(BOOL)pvVar2);
  return;
}



void __cdecl FUN_0040c500(ushort param_1)

{
  uint nIDDlgItem;
  HWND hWnd;
  LRESULT LVar1;
  
  nIDDlgItem = (uint)param_1;
  switch(nIDDlgItem) {
  case 0xce:
    LVar1 = SendDlgItemMessageW(hWndParent_00411498,nIDDlgItem,0xf0,0,0);
    lpData_0041152c = (BYTE *)(uint)(LVar1 == 1);
    break;
  default:
    goto switchD_0040c516_caseD_cf;
  case 0xd1:
    LVar1 = SendDlgItemMessageW(hWndParent_00411498,nIDDlgItem,0xf0,0,0);
    bEnable_00411530 = (PVOID)(uint)(LVar1 == 1);
    FUN_0040c4a0();
    break;
  case 0xd2:
    DialogBoxParamW(hInstance_004114a0,(LPCWSTR)0x2bd,hWndParent_00411498,lpDialogFunc_0040b240,
                    0x411520);
    break;
  case 0xd3:
    LVar1 = SendDlgItemMessageW(hWndParent_00411498,nIDDlgItem,0xf0,0,0);
    pvParam_00411534 = (PVOID)(uint)(LVar1 == 1);
    break;
  case 0xd4:
    LVar1 = SendDlgItemMessageW(hWndParent_00411498,nIDDlgItem,0xf0,0,0);
    pvParam_00411538 = (PVOID)(uint)(LVar1 == 1);
    break;
  case 0xd5:
    LVar1 = SendDlgItemMessageW(hWndParent_00411498,nIDDlgItem,0xf0,0,0);
    pvParam_0041155c = (PVOID)(uint)(LVar1 == 1);
    break;
  case 0xd6:
    LVar1 = SendDlgItemMessageW(hWndParent_00411498,nIDDlgItem,0xf0,0,0);
    bEnable_00411560 = (PVOID)(uint)(LVar1 == 1);
    hWnd = GetDlgItem(hWndParent_00411498,0xd7);
    EnableWindow(hWnd,(BOOL)bEnable_00411560);
    break;
  case 0xd8:
    LVar1 = SendDlgItemMessageW(hWndParent_00411498,nIDDlgItem,0xf0,0,0);
    pvParam_00411568 = (PVOID)(uint)(LVar1 == 1);
    break;
  case 0xd9:
    LVar1 = SendDlgItemMessageW(hWndParent_00411498,nIDDlgItem,0xf0,0,0);
    pvParam_0041156c = (PVOID)(uint)(LVar1 == 1);
    break;
  case 0xda:
    LVar1 = SendDlgItemMessageW(hWndParent_00411498,nIDDlgItem,0xf0,0,0);
    DAT_00411570 = (uint)(LVar1 == 1);
    break;
  case 0xdb:
    FUN_00404d30();
    FUN_0040c710();
  }
  SendMessageW(hWnd_004114a4,0x468,(WPARAM)hWndParent_00411498,0);
switchD_0040c516_caseD_cf:
  return;
}



void FUN_0040c710(void)

{
  HWND hWnd;
  int iVar1;
  
  DAT_0041149c = 0;
  SendDlgItemMessageW(hWndParent_00411498,0xc9,0x467,0,dwInitParam_00411520);
  SendDlgItemMessageW(hWndParent_00411498,0xcb,0x467,0,pvParam_00411524);
  SendDlgItemMessageW(hWndParent_00411498,0xcd,0x467,0,pvParam_00411528);
  SendDlgItemMessageW(hWndParent_00411498,0xce,0xf1,(uint)(lpData_0041152c != (BYTE *)0x0),0);
  SendDlgItemMessageW(hWndParent_00411498,0xd1,0xf1,(uint)(bEnable_00411530 != (PVOID)0x0),0);
  FUN_0040c4a0();
  SendDlgItemMessageW(hWndParent_00411498,0xd3,0xf1,(uint)(pvParam_00411534 != (PVOID)0x0),0);
  SendDlgItemMessageW(hWndParent_00411498,0xd4,0xf1,(uint)(pvParam_00411538 != (PVOID)0x0),0);
  SendDlgItemMessageW(hWndParent_00411498,0xd5,0xf1,(uint)(pvParam_0041155c != (PVOID)0x0),0);
  SendDlgItemMessageW(hWndParent_00411498,0xd6,0xf1,(uint)(bEnable_00411560 != (PVOID)0x0),0);
  hWnd = GetDlgItem(hWndParent_00411498,0xd7);
  EnableWindow(hWnd,(BOOL)bEnable_00411560);
  if (bEnable_00411560 != (PVOID)0x0) {
    iVar1 = FUN_004016b0(hWnd,(int)pvParam_00411564);
    if (iVar1 != 0) goto LAB_0040c881;
  }
  SendMessageW(hWnd,0x14e,0,0);
LAB_0040c881:
  SendDlgItemMessageW(hWndParent_00411498,0xd8,0xf1,(uint)(pvParam_00411568 != (PVOID)0x0),0);
  SendDlgItemMessageW(hWndParent_00411498,0xd9,0xf1,(uint)(pvParam_0041156c != (PVOID)0x0),0);
  SendDlgItemMessageW(hWndParent_00411498,0xda,0xf1,(uint)(DAT_00411570 != 0),0);
  DAT_0041149c = 1;
  return;
}



undefined4 __cdecl FUN_0040c8f0(LPWSTR param_1)

{
  DWORD DVar1;
  LPWSTR pWVar2;
  
  DVar1 = GetTempPathW(0xf8,param_1);
  if (DVar1 == 0) {
    FUN_00401560();
    return 0;
  }
  if (DVar1 - 5 < 0xf3) {
    pWVar2 = lstrcpyW(param_1 + DVar1,L"Win3Schm.ini");
    if (pWVar2 != (LPWSTR)0x0) {
      return 1;
    }
  }
  FUN_00401510(hInstance_004114a0,0x67);
  return 0;
}



undefined4 __cdecl FUN_0040c950(LPCWSTR param_1,LPCWSTR param_2)

{
  DWORD DVar1;
  int iVar2;
  WCHAR local_494 [190];
  undefined4 local_318 [148];
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  undefined4 local_44 [14];
  undefined2 local_c;
  WCHAR *local_8;
  
  DVar1 = GetPrivateProfileStringW(L"Color Schemes",param_2,(LPCWSTR)0x0,local_494,0xbe,param_1);
  if (0x29 < DVar1) {
    local_8 = local_494;
    local_c4 = FUN_004010e0((ushort *)local_494,&local_8);
    local_c4 = local_c4 & 0xffffff;
    if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
      local_8 = local_8 + 1;
      local_98 = FUN_004010e0((ushort *)local_8,&local_8);
      local_98 = local_98 & 0xffffff;
      if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
        local_8 = local_8 + 1;
        local_b4 = FUN_004010e0((ushort *)local_8,&local_8);
        local_b4 = local_b4 & 0xffffff;
        if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
          local_8 = local_8 + 1;
          local_a8 = FUN_004010e0((ushort *)local_8,&local_8);
          local_a8 = local_a8 & 0xffffff;
          if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
            local_8 = local_8 + 1;
            local_b8 = FUN_004010e0((ushort *)local_8,&local_8);
            local_b8 = local_b8 & 0xffffff;
            if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
              local_8 = local_8 + 1;
              local_ac = FUN_004010e0((ushort *)local_8,&local_8);
              local_ac = local_ac & 0xffffff;
              if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
                local_8 = local_8 + 1;
                local_c0 = FUN_004010e0((ushort *)local_8,&local_8);
                local_c0 = local_c0 & 0xffffff;
                if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
                  local_8 = local_8 + 1;
                  local_bc = FUN_004010e0((ushort *)local_8,&local_8);
                  local_bc = local_bc & 0xffffff;
                  if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
                    local_8 = local_8 + 1;
                    local_a4 = FUN_004010e0((ushort *)local_8,&local_8);
                    local_a4 = local_a4 & 0xffffff;
                    if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
                      local_8 = local_8 + 1;
                      local_a0 = FUN_004010e0((ushort *)local_8,&local_8);
                      local_a0 = local_a0 & 0xffffff;
                      if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
                        local_8 = local_8 + 1;
                        local_9c = FUN_004010e0((ushort *)local_8,&local_8);
                        local_9c = local_9c & 0xffffff;
                        if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
                          local_8 = local_8 + 1;
                          local_b0 = FUN_004010e0((ushort *)local_8,&local_8);
                          local_b0 = local_b0 & 0xffffff;
                          if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
                            local_8 = local_8 + 1;
                            local_c8 = FUN_004010e0((ushort *)local_8,&local_8);
                            local_c8 = local_c8 & 0xffffff;
                            if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
                              local_8 = local_8 + 1;
                              local_8c = FUN_004010e0((ushort *)local_8,&local_8);
                              local_8c = local_8c & 0xffffff;
                              if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
                                local_8 = local_8 + 1;
                                local_88 = FUN_004010e0((ushort *)local_8,&local_8);
                                local_88 = local_88 & 0xffffff;
                                if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
                                  local_8 = local_8 + 1;
                                  local_80 = FUN_004010e0((ushort *)local_8,&local_8);
                                  local_80 = local_80 & 0xffffff;
                                  if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
                                    local_8 = local_8 + 1;
                                    local_84 = FUN_004010e0((ushort *)local_8,&local_8);
                                    local_84 = local_84 & 0xffffff;
                                    if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
                                      local_8 = local_8 + 1;
                                      local_94 = FUN_004010e0((ushort *)local_8,&local_8);
                                      local_94 = local_94 & 0xffffff;
                                      if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
                                        local_8 = local_8 + 1;
                                        local_90 = FUN_004010e0((ushort *)local_8,&local_8);
                                        local_90 = local_90 & 0xffffff;
                                        if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
                                          local_8 = local_8 + 1;
                                          local_7c = FUN_004010e0((ushort *)local_8,&local_8);
                                          local_7c = local_7c & 0xffffff;
                                          if ((local_8 != (WCHAR *)0x0) && (*local_8 == L',')) {
                                            local_8 = local_8 + 1;
                                            local_78 = FUN_004010e0((ushort *)local_8,&local_8);
                                            local_78 = local_78 & 0xffffff;
                                            FUN_00404190((int)local_318);
                                            FUN_00404070(local_318);
                                            iVar2 = lstrlenW(param_2);
                                            if (iVar2 + 1 < 0x1d) {
                                              iVar2 = lstrlenW(param_2);
                                              iVar2 = iVar2 + 1;
                                            }
                                            else {
                                              iVar2 = 0x1c;
                                            }
                                            FUN_00401000(local_44,(int)param_2,iVar2 * 2);
                                            local_c = 0;
                                            FUN_00403a70((int)local_318,local_44);
                                            FUN_00403bf0((int)local_318,local_44,L"Normal");
                                            return 1;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 2;
}



undefined4 FUN_0040ce20(void)

{
  undefined4 *puVar1;
  int iVar2;
  BOOL BVar3;
  HANDLE hConsoleOutput;
  DWORD DVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  LPDWORD pDVar8;
  LPVOID pvVar9;
  LPDWORD lpReserved;
  undefined4 uVar10;
  WCHAR local_d8 [76];
  WCHAR local_40 [12];
  WCHAR local_28 [12];
  LPVOID local_10;
  LPVOID local_c;
  int *local_8;
  
  uVar6 = 2;
  iVar2 = FUN_00401350(&local_c,hInstance_004114a0,0x173);
  if (iVar2 != 0) {
    iVar2 = FUN_00401350(&local_10,hInstance_004114a0,0x174);
    if (iVar2 != 0) {
      BVar3 = AttachConsole(0xffffffff);
      if (BVar3 != 0) {
        hConsoleOutput = GetStdHandle(0xfffffff5);
        if (hConsoleOutput == (HANDLE)0xffffffff) {
          FreeConsole();
        }
        else {
          pvVar9 = (LPVOID)0x0;
          pDVar8 = (LPDWORD)0x0;
          DVar4 = lstrlenA((LPCSTR)&lpString_0040e254);
          pcVar5 = WriteConsoleW_exref;
          WriteConsoleW(hConsoleOutput,&lpBuffer_0040e258,DVar4,pDVar8,pvVar9);
          wsprintfW(local_28,L" %%-%ds | %%s",0x1c);
          wsprintfW(local_40,L"%%-%ds",0xd);
          wsprintfW(local_d8,local_28,local_c,local_10);
          pvVar9 = (LPVOID)0x0;
          pDVar8 = (LPDWORD)0x0;
          DVar4 = lstrlenW(local_d8);
          WriteConsoleW(hConsoleOutput,local_d8,DVar4,pDVar8,pvVar9);
          pvVar9 = (LPVOID)0x0;
          pDVar8 = (LPDWORD)0x0;
          DVar4 = lstrlenA((LPCSTR)&lpString_0040e254);
          WriteConsoleW(hConsoleOutput,&lpBuffer_0040e258,DVar4,pDVar8,pvVar9);
          iVar2 = 0x1d;
          do {
            WriteConsoleW(hConsoleOutput,&lpBuffer_0040f0b0,1,(LPDWORD)0x0,(LPVOID)0x0);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          WriteConsoleW(hConsoleOutput,&lpBuffer_0040f0b4,3,(LPDWORD)0x0,(LPVOID)0x0);
          pDVar8 = (LPDWORD)0x2c;
          do {
            WriteConsoleW(hConsoleOutput,&lpBuffer_0040f0b0,1,(LPDWORD)0x0,(LPVOID)0x0);
            pDVar8 = (LPDWORD)((int)pDVar8 + -1);
          } while (pDVar8 != (LPDWORD)0x0);
          lpReserved = pDVar8;
          DVar4 = lstrlenA((LPCSTR)&lpString_0040e254);
          WriteConsoleW(hConsoleOutput,&lpBuffer_0040e258,DVar4,pDVar8,lpReserved);
          FUN_00403430();
          local_8 = DAT_00411140;
          if (DAT_00411140 != (int *)0x0) {
            do {
              wsprintfW(local_d8,local_28,local_8[2],&DAT_0040f0bc);
              uVar10 = 0;
              uVar6 = 0;
              iVar2 = lstrlenW(local_d8);
              (*pcVar5)(hConsoleOutput,local_d8,iVar2,uVar6,uVar10);
              uVar7 = 1;
              for (puVar1 = (undefined4 *)local_8[1]; puVar1 != (undefined4 *)0x0;
                  puVar1 = (undefined4 *)*puVar1) {
                if (1 < uVar7) {
                  WriteConsoleW(hConsoleOutput,&lpBuffer_0040f0c0,2,(LPDWORD)0x0,(LPVOID)0x0);
                }
                wsprintfW(local_d8,local_40,puVar1[2]);
                pvVar9 = (LPVOID)0x0;
                pDVar8 = (LPDWORD)0x0;
                DVar4 = lstrlenW(local_d8);
                WriteConsoleW(hConsoleOutput,local_d8,DVar4,pDVar8,pvVar9);
                if (2 < uVar7) break;
                uVar7 = uVar7 + 1;
              }
              pvVar9 = (LPVOID)0x0;
              pDVar8 = (LPDWORD)0x0;
              DVar4 = lstrlenA((LPCSTR)&lpString_0040e254);
              pcVar5 = WriteConsoleW_exref;
              WriteConsoleW(hConsoleOutput,&lpBuffer_0040e258,DVar4,pDVar8,pvVar9);
              local_8 = (int *)*local_8;
            } while (local_8 != (int *)0x0);
            local_8 = (int *)0x0;
          }
          FUN_00402210(DAT_00411140);
          FreeConsole();
          FUN_00401810();
          uVar6 = 0;
        }
      }
      HeapFree(hHeap_004114a8,0,local_c);
      HeapFree(hHeap_004114a8,0,local_10);
      return uVar6;
    }
    HeapFree(hHeap_004114a8,0,local_c);
  }
  FUN_00401510(hInstance_004114a0,0x67);
  return 2;
}



uint __cdecl FUN_0040d0d0(int param_1,undefined4 *param_2)

{
  LPCWSTR pWVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  DWORD DVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  BOOL BVar7;
  LPCWSTR pWVar8;
  WCHAR local_c34 [260];
  WCHAR local_a2c [628];
  HKEY__ local_544 [148];
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  WCHAR local_26c [70];
  WCHAR local_1e0 [190];
  WCHAR local_64 [28];
  undefined2 local_2c;
  WCHAR local_28 [13];
  undefined2 local_e;
  HKEY__ local_c;
  undefined4 *local_8;
  
  if (*(short *)*param_2 != 0x2f) {
    return 3;
  }
  pWVar8 = (short *)*param_2 + 1;
  iVar4 = lstrcmpiW(pWVar8,L"List");
  if (iVar4 == 0) {
    if (param_1 != 1) {
      return 3;
    }
    uVar5 = FUN_0040ce20();
    return uVar5;
  }
  iVar4 = lstrcmpiW(pWVar8,L"Apply");
  if (iVar4 == 0) {
    if (param_1 != 3) {
      return 3;
    }
    pWVar8 = (LPCWSTR)param_2[2];
    pWVar1 = (LPCWSTR)param_2[1];
    DVar6 = SHRestricted(REST_RESTRICTCPL|REST_NOSETFOLDERS|REST_NOFILEMENU|REST_NOCLOSE|REST_NORUN)
    ;
    if (DVar6 != 0) {
      FUN_004017e0();
      return 2;
    }
    local_c.unused = (int)FUN_00401fc0(pWVar1);
    if ((undefined4 *)local_c.unused == (undefined4 *)0x0) {
      FUN_00401510(hInstance_004114a0,0x67);
      return 2;
    }
    local_8 = FUN_00401fc0(pWVar8);
    if (local_8 != (undefined4 *)0x0) {
      FUN_004030b0(local_544);
      iVar4 = FUN_00403160((int)local_544,&local_c);
      if (iVar4 != 0) {
        FUN_00401d20(local_544,&local_c.unused);
        FUN_004021b0((undefined4 *)local_c.unused);
        FUN_004021b0(local_8);
        return 1;
      }
      FUN_004021b0((undefined4 *)local_c.unused);
      FUN_004021b0(local_8);
      FUN_00401510(hInstance_004114a0,0x175);
      return 2;
    }
    FUN_004021b0((undefined4 *)local_c.unused);
    FUN_00401510(hInstance_004114a0,0x67);
    return 2;
  }
  iVar4 = lstrcmpiW(pWVar8,L"SaveCurrent");
  if (iVar4 == 0) {
    if (param_1 != 3) {
      return 3;
    }
    pWVar8 = (LPCWSTR)param_2[2];
    pWVar1 = (LPCWSTR)param_2[1];
    FUN_004030b0(local_544);
    iVar4 = lstrlenW(pWVar1);
    if (iVar4 + 1 < 0x1d) {
      iVar4 = lstrlenW(pWVar1);
      iVar4 = iVar4 + 1;
    }
    else {
      iVar4 = 0x1c;
    }
    FUN_00401000((undefined4 *)local_64,(int)pWVar1,iVar4 * 2);
    local_2c = 0;
    FUN_00401870(local_64);
    iVar4 = lstrlenW(pWVar8);
    if (iVar4 + 1 < 0xe) {
      iVar4 = lstrlenW(pWVar8);
      iVar4 = iVar4 + 1;
    }
    else {
      iVar4 = 0xd;
    }
    FUN_00401000((undefined4 *)local_28,(int)pWVar8,iVar4 * 2);
    local_e = 0;
    FUN_00401870(local_28);
    bVar3 = FUN_00403a70((int)local_544,local_64);
    if ((CONCAT31(extraout_var,bVar3) != 0) &&
       (bVar3 = FUN_00403bf0((int)local_544,local_64,local_28), CONCAT31(extraout_var_00,bVar3) != 0
       )) {
      FUN_00403b90(local_64,local_28);
      return 1;
    }
    FUN_00401510(hInstance_004114a0,0x15e);
    return 2;
  }
  iVar4 = lstrcmpiW(pWVar8,L"ImportWin3");
  if (iVar4 == 0) {
    if (param_1 != 2) {
      return 3;
    }
    pWVar8 = (LPCWSTR)param_2[1];
    iVar4 = FUN_0040c8f0(local_26c);
    if (iVar4 != 0) {
      BVar7 = CopyFileW(pWVar8,local_26c,0);
      if (BVar7 != 0) {
        DVar6 = GetPrivateProfileStringW
                          (L"Color Schemes",(LPCWSTR)0x0,(LPCWSTR)0x0,local_a2c,0x3df,local_26c);
        if (DVar6 != 0) {
          uVar5 = 0;
          pWVar8 = local_a2c;
          while (local_a2c[0] != L'\0') {
            iVar4 = FUN_0040c950(local_26c,pWVar8);
            if (iVar4 != 2) {
              uVar5 = 1;
            }
            iVar4 = lstrlenW(pWVar8);
            pWVar8 = pWVar8 + iVar4 + 1;
            local_a2c[0] = *pWVar8;
          }
          DeleteFileW(local_26c);
          return uVar5;
        }
        FUN_00401510(hInstance_004114a0,0x176);
        DeleteFileW(local_26c);
        return 2;
      }
      FUN_00401560();
    }
    return 2;
  }
  iVar4 = lstrcmpiW(pWVar8,L"ExportWin3");
  if (iVar4 != 0) {
    iVar4 = lstrcmpiW(pWVar8,L"ApplyCurrentToNewUsers");
    if (iVar4 != 0) {
      return 3;
    }
    uVar5 = FUN_00401a80();
    return uVar5;
  }
  if (param_1 != 2) {
    return 3;
  }
  pWVar8 = (LPCWSTR)param_2[1];
  iVar4 = FUN_0040c8f0(local_c34);
  if (iVar4 != 0) {
    BVar7 = PathFileExistsW(pWVar8);
    if ((BVar7 == 0) || (BVar7 = CopyFileW(pWVar8,local_c34,0), BVar7 != 0)) {
      local_8 = (undefined4 *)0x0;
      FUN_00403430();
      uVar5 = 0;
      for (puVar2 = DAT_00411140; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
        local_c.unused = (int)puVar2;
        iVar4 = FUN_00403160((int)local_544,&local_c);
        if (iVar4 != 0) {
          wsprintfW(local_1e0,L"%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X",
                    local_2f0,local_2c4,local_2e0,local_2d4,local_2e4,local_2d8,local_2ec,local_2e8,
                    local_2d0,local_2cc,local_2c8,local_2dc,local_2f4,local_2b8,local_2b4,local_2ac,
                    local_2b0,local_2c0,local_2bc,local_2a8,local_2a4);
          BVar7 = WritePrivateProfileStringW
                            (L"Color Schemes",(LPCWSTR)puVar2[2],local_1e0,local_c34);
          if (BVar7 == 0) {
            FUN_00401560();
            break;
          }
          uVar5 = 1;
        }
      }
      FUN_00402210(DAT_00411140);
      BVar7 = DeleteFileW(pWVar8);
      if ((BVar7 != 0) && (BVar7 = MoveFileW(local_c34,pWVar8), BVar7 != 0)) {
        return uVar5;
      }
    }
    FUN_00401560();
  }
  return 2;
}



bool __cdecl FUN_0040d600(int param_1)

{
  int iVar1;
  
  FUN_00404960();
  lpData_0041152c = (BYTE *)param_1;
  bEnable_00411530 = (PVOID)param_1;
  if (param_1 != 0) {
    pvParam_00411534 = (PVOID)param_1;
    pvParam_00411538 = (PVOID)param_1;
    pvParam_0041153c = (PVOID)param_1;
    pvParam_00411544 = (PVOID)param_1;
    pvParam_00411548 = (PVOID)param_1;
    pvParam_00411550 = (PVOID)param_1;
    pvParam_00411554 = (PVOID)param_1;
    DAT_00411558 = param_1;
  }
  pvParam_0041155c = (PVOID)param_1;
  bEnable_00411560 = (PVOID)param_1;
  iVar1 = FUN_004043c0();
  return iVar1 != 0;
}



undefined4 __cdecl FUN_0040d660(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00404de0();
  if ((iVar1 != 0) && (DAT_00411570 == param_1)) {
    return 0;
  }
  FUN_00404350(param_1);
  return 1;
}



uint __cdecl FUN_0040d690(int param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  uint uVar3;
  LPCWSTR lpString1;
  undefined4 uVar4;
  
  if ((*(short *)*param_2 == 0x2f) && (param_1 == 1)) {
    lpString1 = (short *)*param_2 + 1;
    iVar2 = lstrcmpiW(lpString1,L"EnableEffects");
    if (iVar2 == 0) {
      bVar1 = FUN_0040d600(1);
      return CONCAT31(extraout_var,bVar1);
    }
    iVar2 = lstrcmpiW(lpString1,L"DisableEffects");
    if (iVar2 == 0) {
      FUN_00404960();
      lpData_0041152c = (BYTE *)0x0;
      bEnable_00411530 = (PVOID)0x0;
      pvParam_0041155c = (PVOID)0x0;
      bEnable_00411560 = (PVOID)0x0;
      iVar2 = FUN_004043c0();
      return (uint)(iVar2 != 0);
    }
    iVar2 = lstrcmpiW(lpString1,L"EnableHighContrast");
    if (iVar2 == 0) {
      uVar3 = FUN_0040d660(1);
      return uVar3;
    }
    iVar2 = lstrcmpiW(lpString1,L"DisableHighContrast");
    if (iVar2 == 0) {
      uVar3 = FUN_0040d660(0);
      return uVar3;
    }
    iVar2 = lstrcmpiW(lpString1,L"ShowHighContrast");
    if (iVar2 == 0) {
      iVar2 = FUN_00404de0();
      if (iVar2 == 0) {
        uVar4 = 0x2ef;
      }
      else if (DAT_00411570 == 0) {
        uVar4 = 0x2f1;
      }
      else {
        uVar4 = 0x2f0;
      }
      FUN_00401510(hInstance_004114a0,uVar4);
      return 1;
    }
    iVar2 = lstrcmpiW(lpString1,L"RestoreDefaults");
    if (iVar2 == 0) {
      FUN_00404960();
      FUN_00404d30();
      uVar3 = FUN_004043c0();
      return uVar3;
    }
  }
  return 3;
}



undefined1 __cdecl FUN_0040d7c0(undefined4 param_1)

{
  DWORD DVar1;
  HWND hWnd;
  HPROPSHEETPAGE p_Var2;
  INT_PTR IVar3;
  uint uVar4;
  undefined1 local_7c [56];
  undefined4 local_44;
  undefined4 local_40;
  HINSTANCE local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  code *local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14 [8];
  INITCOMMONCONTROLSEX local_c;
  
  CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,1,L"TortoClassicAppearanceConfig");
  DVar1 = GetLastError();
  if (DVar1 == 0xb7) {
    hWnd = FindWindowExW((HWND)0x0,(HWND)0x0,(LPCWSTR)0x8002,L"Appearance Properties");
    if (hWnd == (HWND)0x0) {
      hWnd = FindWindowExW((HWND)0x0,(HWND)0x0,(LPCWSTR)0x8002,L"Propiedades de Apariencia");
      if (hWnd == (HWND)0x0) goto LAB_0040d820;
    }
    SetForegroundWindow(hWnd);
    return 4;
  }
LAB_0040d820:
  local_c.dwSize = 8;
  local_c.dwICC = 0xc014;
  InitCommonControlsEx(&local_c);
  uVar4 = 0;
  local_3c = hInstance_004114a0;
  local_2c = param_1;
  local_28 = local_14;
  local_40 = 0;
  local_20 = 0;
  local_18 = 0;
  local_7c._52_4_ = (_union_1948)0x34;
  local_44 = 0x2000105;
  local_38 = 100;
  local_34 = 0x29;
  local_30 = 0;
  local_24 = FUN_0040db70;
  do {
    if (*(short *)((int)&DAT_0040f2c8 + uVar4) == 300) {
      DVar1 = SHRestricted(REST_RESTRICTCPL|REST_NOSETFOLDERS|REST_NOFILEMENU|REST_NOCLOSE|
                           REST_NORUN);
      if (DVar1 == 0) goto LAB_0040d8b5;
    }
    else {
LAB_0040d8b5:
      local_7c._8_4_ = hInstance_004114a0;
      local_7c._14_2_ = 0;
      local_7c._12_2_ = *(ushort *)((int)&DAT_0040f2c8 + uVar4);
      local_7c._24_4_ = *(undefined4 *)((int)&PTR_FUN_0040f2cc + uVar4);
      local_7c._16_4_ = (_union_1947)0x0;
      local_7c._20_4_ = (LPCWSTR)0x0;
      local_7c._28_8_ = 0;
      local_7c._36_4_ = (UINT *)0x0;
      local_7c._40_4_ = (LPCWSTR)0x0;
      local_7c._44_4_ = (LPCWSTR)0x0;
      local_7c._48_4_ = (HANDLE)0x0;
      local_7c._0_4_ = 0x34;
      local_7c._4_4_ = 0;
      if (*(uint *)((int)&PTR_FUN_0040f2d0 + uVar4) != 0) {
        local_7c._4_4_ = 0x80;
        local_7c._28_8_ = (ulonglong)*(uint *)((int)&PTR_FUN_0040f2d0 + uVar4) << 0x20;
      }
      p_Var2 = CreatePropertySheetPageW((LPCPROPSHEETPAGEW)local_7c);
      if (p_Var2 != (HPROPSHEETPAGE)0x0) {
        *(HPROPSHEETPAGE *)(local_28 + local_30 * 4) = p_Var2;
        local_30 = local_30 + 1;
      }
    }
    uVar4 = uVar4 + 0x10;
    if (0x1f < uVar4) {
      if (local_30 == 0) {
        FUN_004017e0();
        return 2;
      }
      IVar3 = PropertySheetW((LPCPROPSHEETHEADERW)(local_7c + 0x34));
      if (IVar3 < 0) {
        FUN_00401750(hInstance_004114a0,(HWND)0x0,0x66,0x65,0);
        return 2;
      }
      return IVar3 != 0;
    }
  } while( true );
}



uint FUN_0040d990(void)

{
  int iVar1;
  undefined1 uVar2;
  DWORD DVar3;
  HDC hdc;
  LPWSTR pWVar4;
  LPWSTR *hMem;
  int iVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  int *pNumArgs;
  int local_8;
  
  hHeap_004114a8 = GetProcessHeap();
  if ((hHeap_004114a8 == (HANDLE)0x0) ||
     (hInstance_004114a0 = GetModuleHandleW((LPCWSTR)0x0), hInstance_004114a0 == (HMODULE)0x0)) {
    FUN_00401750(hInstance_004114a0,(HWND)0x0,0x67,0x65,0);
    return 2;
  }
  DVar3 = SHRestricted(REST_RESTRICTCPL|REST_NOSETTASKBAR|REST_NOSETFOLDERS|REST_NOFILEMENU|
                       REST_NOCLOSE|REST_NORUN);
  if (DVar3 != 0) {
    FUN_004017e0();
    return 2;
  }
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    nNumerator_004114ac = 0x60;
  }
  else {
    nNumerator_004114ac = GetDeviceCaps(hdc,0x5a);
    ReleaseDC((HWND)0x0,hdc);
  }
  pNumArgs = &local_8;
  local_8 = 0;
  pWVar4 = GetCommandLineW();
  hMem = CommandLineToArgvW(pWVar4,pNumArgs);
  iVar1 = local_8;
  if (local_8 < 2) {
    LocalFree(hMem);
    uVar2 = FUN_0040d7c0(0);
    return CONCAT31(extraout_var_00,uVar2);
  }
  pWVar4 = hMem[1];
  if (*pWVar4 != L'@') {
    FUN_00401510(hInstance_004114a0,0x68);
    LocalFree(hMem);
    return 3;
  }
  uVar6 = 0;
  ppuVar7 = &lpString2_0040f2d4;
  do {
    iVar5 = lstrcmpiW(pWVar4 + 1,(LPCWSTR)*ppuVar7);
    if (iVar5 == 0) {
      if (iVar1 < 3) {
        uVar2 = FUN_0040d7c0(uVar6);
        LocalFree(hMem);
        return CONCAT31(extraout_var,uVar2);
      }
      if (uVar6 == 0) {
        uVar6 = FUN_0040d0d0(iVar1 + -2,hMem + 2);
        if (uVar6 != 3) goto LAB_0040db25;
        uVar8 = 0x172;
      }
      else {
        if (uVar6 != 1) break;
        uVar6 = FUN_0040d690(iVar1 + -2,hMem + 2);
        if (uVar6 != 3) goto LAB_0040db25;
        uVar8 = 0x2ee;
      }
      FUN_00401510(hInstance_004114a0,uVar8);
LAB_0040db25:
      LocalFree(hMem);
      return uVar6;
    }
    uVar6 = uVar6 + 1;
    ppuVar7 = ppuVar7 + 4;
  } while (uVar6 < 2);
  FUN_00401510(hInstance_004114a0,0x68);
  LocalFree(hMem);
  return 3;
}



undefined4 FUN_0040db70(HWND param_1,int param_2)

{
  HANDLE lParam;
  
  if (param_2 == 1) {
    hWnd_004114a4 = param_1;
    lParam = LoadImageW(hInstance_004114a0,(LPCWSTR)0x64,1,0,0,0x40);
    SendMessageW(hWnd_004114a4,0x80,1,(LPARAM)lParam);
  }
  return 0;
}



void entry(void)

{
  uint uExitCode;
  
  uExitCode = FUN_0040d990();
                    // WARNING: Subroutine does not return
  ExitProcess(uExitCode);
}


