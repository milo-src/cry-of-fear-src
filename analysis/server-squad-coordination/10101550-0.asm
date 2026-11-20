
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101550 <.text+0x100550>:
10101550:	56                   	push   esi
10101551:	8b f1                	mov    esi,ecx
10101553:	8d 8e 68 03 00 00    	lea    ecx,[esi+0x368]
10101559:	e8 32 62 f1 ff       	call   0x10017790
1010155e:	8b d0                	mov    edx,eax
10101560:	85 d2                	test   edx,edx
10101562:	75 06                	jne    0x1010156a
10101564:	8b d6                	mov    edx,esi
10101566:	85 d2                	test   edx,edx
10101568:	74 1c                	je     0x10101586
1010156a:	f3 0f 7e 86 f4 02 00 	movq   xmm0,QWORD PTR [esi+0x2f4]
10101571:	00 
10101572:	66 0f d6 82 f4 02 00 	movq   QWORD PTR [edx+0x2f4],xmm0
10101579:	00 
1010157a:	8b 86 fc 02 00 00    	mov    eax,DWORD PTR [esi+0x2fc]
10101580:	89 82 fc 02 00 00    	mov    DWORD PTR [edx+0x2fc],eax
10101586:	5e                   	pop    esi
10101587:	c3                   	ret
