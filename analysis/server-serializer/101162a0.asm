
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101162a0 <.text+0x1152a0>:
101162a0:	55                   	push   ebp
101162a1:	8b ec                	mov    ebp,esp
101162a3:	56                   	push   esi
101162a4:	57                   	push   edi
101162a5:	8b f9                	mov    edi,ecx
101162a7:	e8 b4 0e 00 00       	call   0x10117160
101162ac:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
101162af:	8b cf                	mov    ecx,edi
101162b1:	66 89 06             	mov    WORD PTR [esi],ax
101162b4:	e8 a7 0e 00 00       	call   0x10117160
101162b9:	8b cf                	mov    ecx,edi
101162bb:	66 89 46 02          	mov    WORD PTR [esi+0x2],ax
101162bf:	e8 5c ff ff ff       	call   0x10116220
101162c4:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
101162c7:	8b cf                	mov    ecx,edi
101162c9:	0f b7 06             	movzx  eax,WORD PTR [esi]
101162cc:	50                   	push   eax
101162cd:	e8 3e 00 00 00       	call   0x10116310
101162d2:	5f                   	pop    edi
101162d3:	5e                   	pop    esi
101162d4:	5d                   	pop    ebp
101162d5:	c2 04 00             	ret    0x4
