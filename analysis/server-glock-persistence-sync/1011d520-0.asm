
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011d520 <.text+0x11c520>:
1011d520:	56                   	push   esi
1011d521:	8b f1                	mov    esi,ecx
1011d523:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
1011d52a:	7f 2b                	jg     0x1011d557
1011d52c:	8b 06                	mov    eax,DWORD PTR [esi]
1011d52e:	ff 90 68 01 00 00    	call   DWORD PTR [eax+0x168]
1011d534:	8d 14 85 40 25 00 00 	lea    edx,[eax*4+0x2540]
1011d53b:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1011d541:	83 3c 02 00          	cmp    DWORD PTR [edx+eax*1],0x0
1011d545:	7f 10                	jg     0x1011d557
1011d547:	8b ce                	mov    ecx,esi
1011d549:	e8 a2 2d 00 00       	call   0x101202f0
1011d54e:	83 f8 ff             	cmp    eax,0xffffffff
1011d551:	74 04                	je     0x1011d557
1011d553:	33 c0                	xor    eax,eax
1011d555:	5e                   	pop    esi
1011d556:	c3                   	ret
1011d557:	b8 01 00 00 00       	mov    eax,0x1
1011d55c:	5e                   	pop    esi
1011d55d:	c3                   	ret
