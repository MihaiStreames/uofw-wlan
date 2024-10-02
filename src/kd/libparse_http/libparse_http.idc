#include <idc.idc>

static main() {
   createModuleInfo();
   createExports(); 
   createImports(); 
   createRelocs();  
}

static createModuleInfo() {
  MakeName(0x000007B4, "_module_flags");
  MakeDword(0x000007B4);
  MakeName(0x000007B8, "_module_name");
  MakeStr(0x000007B8, BADADDR);
  MakeName(0x000007D4, "_module_gp");
  MakeDword(0x000007D4);
  MakeName(0x000007D8, "_module_exports");
  MakeDword(0x000007D8);
  OpOff(0x000007D8, 0, 0);
  MakeName(0x000007DC, "_module_exp_end");
  MakeDword(0x000007DC);
  OpOff(0x000007DC, 0, 0);
  MakeName(0x000007E0, "_module_imports");
  MakeDword(0x000007E0);
  OpOff(0x000007E0, 0, 0);
  MakeName(0x000007E4, "_module_imp_end");
  MakeDword(0x000007E4);
  OpOff(0x000007E4, 0, 0);
}

static createImports() {
  MakeName(0x0000079C, "import0");
  MakeDword(0x0000079C);
  OpOff(0x0000079C, 0, 0);
  MakeName(0x000007EC, "import0_name");
  MakeStr(0x000007EC, BADADDR);
  MakeName(0x000007A0, "import0_flags");
  MakeDword(0x000007A0);
  MakeName(0x000007A4, "import0_counts");
  MakeDword(0x000007A4);
  MakeName(0x000007A8, "import0_nids");
  MakeDword(0x000007A8);
  OpOff(0x000007A8, 0, 0);
  MakeName(0x000007AC, "import0_funcs");
  MakeDword(0x000007AC);
  OpOff(0x000007AC, 0, 0);
  MakeName(0x0000082C, "import0_Kernel_Library_D13BDE95");
  MakeDword(0x0000082C);
  MakeName(0x00000768, "Kernel_Library_D13BDE95");
  MakeFunction(0x00000768, BADADDR);
}

static createExports() {
  MakeName(0x00000774, "export_0");
  MakeDword(0x00000774);
  MakeName(0x00000778, "export_0_flags");
  MakeDword(0x00000778);
  MakeName(0x0000077C, "export_0_counts");
  MakeDword(0x0000077C);
  MakeName(0x00000780, "export_0_exports");
  MakeDword(0x00000780);
  OpOff(0x00000780, 0, 0);
  MakeName(0x000007FC, "export_0_module_info");
  MakeDword(0x000007FC);
  MakeName(0x00000804, "");
  MakeDword(0x00000804);
  OpOff(0x00000804, 0, 0);
  MakeName(0x00000800, "export_0_module_sdk_version");
  MakeDword(0x00000800);
  MakeName(0x00000808, "");
  MakeDword(0x00000808);
  OpOff(0x00000808, 0, 0);
  MakeName(0x00000784, "export_1");
  MakeDword(0x00000784);
  OpOff(0x00000784, 0, 0);
  MakeName(0x0000080C, "export_1_name");
  MakeStr(0x0000080C, BADADDR);
  MakeName(0x00000788, "export_1_flags");
  MakeDword(0x00000788);
  MakeName(0x0000078C, "export_1_counts");
  MakeDword(0x0000078C);
  MakeName(0x00000790, "export_1_exports");
  MakeDword(0x00000790);
  OpOff(0x00000790, 0, 0);
  MakeName(0x0000081C, "export_1_sceParseHttp_8077A433");
  MakeDword(0x0000081C);
  MakeName(0x00000824, "");
  MakeDword(0x00000824);
  OpOff(0x00000824, 0, 0);
  MakeName(0x00000000, "sceParseHttp_8077A433");
  MakeFunction(0x00000000, BADADDR);
  MakeName(0x00000820, "export_1_sceParseHttp_AD7BFDEF");
  MakeDword(0x00000820);
  MakeName(0x00000828, "");
  MakeDword(0x00000828);
  OpOff(0x00000828, 0, 0);
  MakeName(0x00000118, "sceParseHttp_AD7BFDEF");
  MakeFunction(0x00000118, BADADDR);
}

static createRelocs() {
}

