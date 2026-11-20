
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101230 <.text+0x100230>:
10101230:	56                   	push   esi
10101231:	8b f1                	mov    esi,ecx
10101233:	8d 8e 68 03 00 00    	lea    ecx,[esi+0x368]
10101239:	e8 52 65 f1 ff       	call   0x10017790
1010123e:	85 c0                	test   eax,eax
10101240:	75 06                	jne    0x10101248
10101242:	8b c6                	mov    eax,esi
10101244:	85 c0                	test   eax,eax
10101246:	74 1c                	je     0x10101264
10101248:	f3 0f 7e 80 f4 02 00 	movq   xmm0,QWORD PTR [eax+0x2f4]
1010124f:	00 
10101250:	66 0f d6 86 f4 02 00 	movq   QWORD PTR [esi+0x2f4],xmm0
10101257:	00 
10101258:	8b 80 fc 02 00 00    	mov    eax,DWORD PTR [eax+0x2fc]
1010125e:	89 86 fc 02 00 00    	mov    DWORD PTR [esi+0x2fc],eax
10101264:	5e                   	pop    esi
10101265:	c3                   	ret
