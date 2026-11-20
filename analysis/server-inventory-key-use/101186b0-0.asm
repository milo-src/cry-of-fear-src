
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101186b0 <.text+0x1176b0>:
101186b0:	55                   	push   ebp
101186b1:	8b ec                	mov    ebp,esp
101186b3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
101186b6:	85 c0                	test   eax,eax
101186b8:	74 0b                	je     0x101186c5
101186ba:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
101186bd:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
101186c3:	eb 02                	jmp    0x101186c7
101186c5:	33 c0                	xor    eax,eax
101186c7:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
101186cc:	56                   	push   esi
101186cd:	51                   	push   ecx
101186ce:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
101186d3:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
101186d6:	50                   	push   eax
101186d7:	ff 15 88 2f 22 10    	call   DWORD PTR ds:0x10222f88
101186dd:	8b f0                	mov    esi,eax
101186df:	83 c4 0c             	add    esp,0xc
101186e2:	85 f6                	test   esi,esi
101186e4:	74 14                	je     0x101186fa
101186e6:	56                   	push   esi
101186e7:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
101186ed:	83 c4 04             	add    esp,0x4
101186f0:	85 c0                	test   eax,eax
101186f2:	74 06                	je     0x101186fa
101186f4:	8b 46 7c             	mov    eax,DWORD PTR [esi+0x7c]
101186f7:	5e                   	pop    esi
101186f8:	5d                   	pop    ebp
101186f9:	c3                   	ret
101186fa:	33 c0                	xor    eax,eax
101186fc:	5e                   	pop    esi
101186fd:	5d                   	pop    ebp
101186fe:	c3                   	ret
