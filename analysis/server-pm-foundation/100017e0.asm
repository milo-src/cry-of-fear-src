
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100017e0 <.text+0x7e0>:
100017e0:	55                   	push   ebp
100017e1:	8b ec                	mov    ebp,esp
100017e3:	83 ec 64             	sub    esp,0x64
100017e6:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100017eb:	33 c5                	xor    eax,ebp
100017ed:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100017f0:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100017f3:	33 c9                	xor    ecx,ecx
100017f5:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100017f8:	0f 57 ed             	xorps  xmm5,xmm5
100017fb:	56                   	push   esi
100017fc:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
100017ff:	f3 0f 10 30          	movss  xmm6,DWORD PTR [eax]
10001803:	f3 0f 10 78 04       	movss  xmm7,DWORD PTR [eax+0x4]
10001808:	57                   	push   edi
10001809:	8d 7d a0             	lea    edi,[ebp-0x60]
1000180c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10001810:	f6 c1 01             	test   cl,0x1
10001813:	74 0a                	je     0x1000181f
10001815:	f3 0f 10 02          	movss  xmm0,DWORD PTR [edx]
10001819:	f3 0f 5c c5          	subss  xmm0,xmm5
1000181d:	eb 08                	jmp    0x10001827
1000181f:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
10001823:	f3 0f 58 c5          	addss  xmm0,xmm5
10001827:	f6 c1 02             	test   cl,0x2
1000182a:	74 0b                	je     0x10001837
1000182c:	f3 0f 10 5a 04       	movss  xmm3,DWORD PTR [edx+0x4]
10001831:	f3 0f 5c dd          	subss  xmm3,xmm5
10001835:	eb 09                	jmp    0x10001840
10001837:	f3 0f 10 5e 04       	movss  xmm3,DWORD PTR [esi+0x4]
1000183c:	f3 0f 58 dd          	addss  xmm3,xmm5
10001840:	f6 c1 04             	test   cl,0x4
10001843:	74 0b                	je     0x10001850
10001845:	f3 0f 10 62 08       	movss  xmm4,DWORD PTR [edx+0x8]
1000184a:	f3 0f 5c e5          	subss  xmm4,xmm5
1000184e:	eb 09                	jmp    0x10001859
10001850:	f3 0f 10 66 08       	movss  xmm4,DWORD PTR [esi+0x8]
10001855:	f3 0f 58 e5          	addss  xmm4,xmm5
10001859:	0f 28 d6             	movaps xmm2,xmm6
1000185c:	0f 28 cf             	movaps xmm1,xmm7
1000185f:	f3 0f 58 d0          	addss  xmm2,xmm0
10001863:	41                   	inc    ecx
10001864:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
10001869:	f3 0f 58 cb          	addss  xmm1,xmm3
1000186d:	f3 0f 58 c4          	addss  xmm0,xmm4
10001871:	f3 0f 11 57 fc       	movss  DWORD PTR [edi-0x4],xmm2
10001876:	f3 0f 11 0f          	movss  DWORD PTR [edi],xmm1
1000187a:	f3 0f 11 47 04       	movss  DWORD PTR [edi+0x4],xmm0
1000187f:	83 c7 0c             	add    edi,0xc
10001882:	83 f9 08             	cmp    ecx,0x8
10001885:	7c 89                	jl     0x10001810
10001887:	8b 7d 14             	mov    edi,DWORD PTR [ebp+0x14]
1000188a:	be 30 10 21 10       	mov    esi,0x10211030
1000188f:	90                   	nop
10001890:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10001893:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
10001898:	51                   	push   ecx
10001899:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1000189e:	8d 4d 9c             	lea    ecx,[ebp-0x64]
100018a1:	8d 04 40             	lea    eax,[eax+eax*2]
100018a4:	8d 04 81             	lea    eax,[ecx+eax*4]
100018a7:	57                   	push   edi
100018a8:	50                   	push   eax
100018a9:	8b 06                	mov    eax,DWORD PTR [esi]
100018ab:	8d 04 40             	lea    eax,[eax+eax*2]
100018ae:	8d 04 81             	lea    eax,[ecx+eax*4]
100018b1:	50                   	push   eax
100018b2:	8b 46 f8             	mov    eax,DWORD PTR [esi-0x8]
100018b5:	8d 04 40             	lea    eax,[eax+eax*2]
100018b8:	8d 04 81             	lea    eax,[ecx+eax*4]
100018bb:	50                   	push   eax
100018bc:	8b 46 fc             	mov    eax,DWORD PTR [esi-0x4]
100018bf:	8d 04 40             	lea    eax,[eax+eax*2]
100018c2:	8d 04 81             	lea    eax,[ecx+eax*4]
100018c5:	50                   	push   eax
100018c6:	e8 55 0b 00 00       	call   0x10002420
100018cb:	83 c6 10             	add    esi,0x10
100018ce:	83 c4 18             	add    esp,0x18
100018d1:	81 fe 90 10 21 10    	cmp    esi,0x10211090
100018d7:	7c b7                	jl     0x10001890
100018d9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100018dc:	5f                   	pop    edi
100018dd:	33 cd                	xor    ecx,ebp
100018df:	5e                   	pop    esi
100018e0:	e8 ce c2 13 00       	call   0x1013dbb3
100018e5:	8b e5                	mov    esp,ebp
100018e7:	5d                   	pop    ebp
100018e8:	c3                   	ret
