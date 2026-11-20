
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bd7b0 <.text+0xbc7b0>:
100bd7b0:	55                   	push   ebp
100bd7b1:	8b ec                	mov    ebp,esp
100bd7b3:	f3 0f 10 05 04 1f 1a 	movss  xmm0,DWORD PTR ds:0x101a1f04
100bd7ba:	10 
100bd7bb:	0f 2f 45 0c          	comiss xmm0,DWORD PTR [ebp+0xc]
100bd7bf:	56                   	push   esi
100bd7c0:	72 43                	jb     0x100bd805
100bd7c2:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100bd7c7:	0f 5a c0             	cvtps2pd xmm0,xmm0
100bd7ca:	66 0f 2f 05 58 1e 1a 	comisd xmm0,QWORD PTR ds:0x101a1e58
100bd7d1:	10 
100bd7d2:	72 31                	jb     0x100bd805
100bd7d4:	8d b1 84 01 00 00    	lea    esi,[ecx+0x184]
100bd7da:	8b ce                	mov    ecx,esi
100bd7dc:	e8 9f 9f f5 ff       	call   0x10017780
100bd7e1:	85 c0                	test   eax,eax
100bd7e3:	74 20                	je     0x100bd805
100bd7e5:	8b ce                	mov    ecx,esi
100bd7e7:	e8 b4 9f f5 ff       	call   0x100177a0
100bd7ec:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100bd7ef:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x200
100bd7f6:	02 00 00 
100bd7f9:	74 0a                	je     0x100bd805
100bd7fb:	b8 01 00 00 00       	mov    eax,0x1
100bd800:	5e                   	pop    esi
100bd801:	5d                   	pop    ebp
100bd802:	c2 08 00             	ret    0x8
100bd805:	33 c0                	xor    eax,eax
100bd807:	5e                   	pop    esi
100bd808:	5d                   	pop    ebp
100bd809:	c2 08 00             	ret    0x8
