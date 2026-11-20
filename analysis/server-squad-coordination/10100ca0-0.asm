
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10100ca0 <.text+0xffca0>:
10100ca0:	55                   	push   ebp
10100ca1:	8b ec                	mov    ebp,esp
10100ca3:	56                   	push   esi
10100ca4:	8b f1                	mov    esi,ecx
10100ca6:	8d 8e 68 03 00 00    	lea    ecx,[esi+0x368]
10100cac:	e8 cf 6a f1 ff       	call   0x10017780
10100cb1:	85 c0                	test   eax,eax
10100cb3:	74 1d                	je     0x10100cd2
10100cb5:	51                   	push   ecx
10100cb6:	c7 04 24 00 00 00 43 	mov    DWORD PTR [esp],0x43000000
10100cbd:	8b ce                	mov    ecx,esi
10100cbf:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10100cc2:	e8 c9 07 00 00       	call   0x10101490
10100cc7:	85 c0                	test   eax,eax
10100cc9:	74 07                	je     0x10100cd2
10100ccb:	33 c0                	xor    eax,eax
10100ccd:	5e                   	pop    esi
10100cce:	5d                   	pop    ebp
10100ccf:	c2 04 00             	ret    0x4
10100cd2:	b8 01 00 00 00       	mov    eax,0x1
10100cd7:	5e                   	pop    esi
10100cd8:	5d                   	pop    ebp
10100cd9:	c2 04 00             	ret    0x4
