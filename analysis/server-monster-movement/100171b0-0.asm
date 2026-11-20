
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100171b0 <.text+0x161b0>:
100171b0:	55                   	push   ebp
100171b1:	8b ec                	mov    ebp,esp
100171b3:	56                   	push   esi
100171b4:	8b f1                	mov    esi,ecx
100171b6:	83 7e 14 00          	cmp    DWORD PTR [esi+0x14],0x0
100171ba:	75 30                	jne    0x100171ec
100171bc:	83 7e 1c 00          	cmp    DWORD PTR [esi+0x1c],0x0
100171c0:	75 2a                	jne    0x100171ec
100171c2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100171c5:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100171ca:	f3 0f 11 80 04 01 00 	movss  DWORD PTR [eax+0x104],xmm0
100171d1:	00 
100171d2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100171d5:	f3 0f 10 80 04 01 00 	movss  xmm0,DWORD PTR [eax+0x104]
100171dc:	00 
100171dd:	f3 0f 11 46 58       	movss  DWORD PTR [esi+0x58],xmm0
100171e2:	f3 0f 11 46 5c       	movss  DWORD PTR [esi+0x5c],xmm0
100171e7:	5e                   	pop    esi
100171e8:	5d                   	pop    ebp
100171e9:	c2 08 00             	ret    0x8
100171ec:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100171f1:	f3 0f 11 46 58       	movss  DWORD PTR [esi+0x58],xmm0
100171f6:	e8 95 0e 00 00       	call   0x10018090
100171fb:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100171fe:	56                   	push   esi
100171ff:	e8 7c d6 0a 00       	call   0x100c4880
10017204:	83 c4 08             	add    esp,0x8
10017207:	5e                   	pop    esi
10017208:	5d                   	pop    ebp
10017209:	c2 08 00             	ret    0x8
