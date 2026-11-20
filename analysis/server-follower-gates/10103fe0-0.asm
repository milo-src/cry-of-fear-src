
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10103fe0 <.text+0x102fe0>:
10103fe0:	56                   	push   esi
10103fe1:	8b f1                	mov    esi,ecx
10103fe3:	83 be 24 02 00 00 06 	cmp    DWORD PTR [esi+0x224],0x6
10103fea:	75 0f                	jne    0x10103ffb
10103fec:	8b 8e 4c 03 00 00    	mov    ecx,DWORD PTR [esi+0x34c]
10103ff2:	e8 89 64 ff ff       	call   0x100fa480
10103ff7:	85 c0                	test   eax,eax
10103ff9:	74 0e                	je     0x10104009
10103ffb:	8b 06                	mov    eax,DWORD PTR [esi]
10103ffd:	8b ce                	mov    ecx,esi
10103fff:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
10104005:	85 c0                	test   eax,eax
10104007:	75 04                	jne    0x1010400d
10104009:	33 c0                	xor    eax,eax
1010400b:	5e                   	pop    esi
1010400c:	c3                   	ret
1010400d:	b8 01 00 00 00       	mov    eax,0x1
10104012:	5e                   	pop    esi
10104013:	c3                   	ret
