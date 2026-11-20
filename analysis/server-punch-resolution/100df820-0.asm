
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100df820 <.text+0xde820>:
100df820:	55                   	push   ebp
100df821:	8b ec                	mov    ebp,esp
100df823:	83 e4 f8             	and    esp,0xfffffff8
100df826:	83 ec 6c             	sub    esp,0x6c
100df829:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100df82c:	53                   	push   ebx
100df82d:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100df830:	f3 0f 10 0d 68 bb 1b 	movss  xmm1,DWORD PTR ds:0x101bbb68
100df837:	10 
100df838:	56                   	push   esi
100df839:	57                   	push   edi
100df83a:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100df83d:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
100df841:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
100df844:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
100df848:	8d 44 24 40          	lea    eax,[esp+0x40]
100df84c:	f3 0f 10 67 14       	movss  xmm4,DWORD PTR [edi+0x14]
100df851:	f3 0f 10 57 18       	movss  xmm2,DWORD PTR [edi+0x18]
100df856:	f3 0f 10 47 1c       	movss  xmm0,DWORD PTR [edi+0x1c]
100df85b:	f3 0f 5c 23          	subss  xmm4,DWORD PTR [ebx]
100df85f:	f3 0f 5c 53 04       	subss  xmm2,DWORD PTR [ebx+0x4]
100df864:	f3 0f 5c 43 08       	subss  xmm0,DWORD PTR [ebx+0x8]
100df869:	50                   	push   eax
100df86a:	ff 75 18             	push   DWORD PTR [ebp+0x18]
100df86d:	f3 0f 58 e4          	addss  xmm4,xmm4
100df871:	f3 0f 11 4c 24 14    	movss  DWORD PTR [esp+0x14],xmm1
100df877:	f3 0f 58 d2          	addss  xmm2,xmm2
100df87b:	f3 0f 58 c0          	addss  xmm0,xmm0
100df87f:	6a 00                	push   0x0
100df881:	8d 44 24 34          	lea    eax,[esp+0x34]
100df885:	f3 0f 58 23          	addss  xmm4,DWORD PTR [ebx]
100df889:	f3 0f 58 53 04       	addss  xmm2,DWORD PTR [ebx+0x4]
100df88e:	f3 0f 58 43 08       	addss  xmm0,DWORD PTR [ebx+0x8]
100df893:	50                   	push   eax
100df894:	53                   	push   ebx
100df895:	f3 0f 11 64 24 3c    	movss  DWORD PTR [esp+0x3c],xmm4
100df89b:	f3 0f 11 54 24 40    	movss  DWORD PTR [esp+0x40],xmm2
100df8a1:	f3 0f 11 44 24 44    	movss  DWORD PTR [esp+0x44],xmm0
100df8a7:	e8 54 af 03 00       	call   0x1011a800
100df8ac:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
100df8b3:	10 
100df8b4:	83 c4 14             	add    esp,0x14
100df8b7:	0f 2f 44 24 50       	comiss xmm0,DWORD PTR [esp+0x50]
100df8bc:	76 2e                	jbe    0x100df8ec
100df8be:	0f 10 44 24 40       	movups xmm0,XMMWORD PTR [esp+0x40]
100df8c3:	0f 11 07             	movups XMMWORD PTR [edi],xmm0
100df8c6:	0f 10 44 24 50       	movups xmm0,XMMWORD PTR [esp+0x50]
100df8cb:	0f 11 47 10          	movups XMMWORD PTR [edi+0x10],xmm0
100df8cf:	0f 10 44 24 60       	movups xmm0,XMMWORD PTR [esp+0x60]
100df8d4:	0f 11 47 20          	movups XMMWORD PTR [edi+0x20],xmm0
100df8d8:	f3 0f 7e 44 24 70    	movq   xmm0,QWORD PTR [esp+0x70]
100df8de:	66 0f d6 47 30       	movq   QWORD PTR [edi+0x30],xmm0
100df8e3:	5f                   	pop    edi
100df8e4:	5e                   	pop    esi
100df8e5:	5b                   	pop    ebx
100df8e6:	8b e5                	mov    esp,ebp
100df8e8:	5d                   	pop    ebp
100df8e9:	c2 14 00             	ret    0x14
100df8ec:	33 c9                	xor    ecx,ecx
100df8ee:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
100df8f2:	8b 4c 8c 20          	mov    ecx,DWORD PTR [esp+ecx*4+0x20]
100df8f6:	33 c0                	xor    eax,eax
100df8f8:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
100df8fc:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
100df900:	8b 44 84 20          	mov    eax,DWORD PTR [esp+eax*4+0x20]
100df904:	33 f6                	xor    esi,esi
100df906:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
100df90a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100df910:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
100df914:	f3 0f 58 44 24 28    	addss  xmm0,DWORD PTR [esp+0x28]
100df91a:	f3 0f 11 44 24 34    	movss  DWORD PTR [esp+0x34],xmm0
100df920:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
100df925:	f3 0f 58 44 24 2c    	addss  xmm0,DWORD PTR [esp+0x2c]
100df92b:	8b 44 b4 20          	mov    eax,DWORD PTR [esp+esi*4+0x20]
100df92f:	f3 0f 11 44 24 38    	movss  DWORD PTR [esp+0x38],xmm0
100df935:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100df93a:	8d 44 24 40          	lea    eax,[esp+0x40]
100df93e:	f3 0f 58 44 24 30    	addss  xmm0,DWORD PTR [esp+0x30]
100df944:	50                   	push   eax
100df945:	ff 75 18             	push   DWORD PTR [ebp+0x18]
100df948:	8d 44 24 3c          	lea    eax,[esp+0x3c]
100df94c:	6a 00                	push   0x0
100df94e:	50                   	push   eax
100df94f:	53                   	push   ebx
100df950:	f3 0f 11 44 24 50    	movss  DWORD PTR [esp+0x50],xmm0
100df956:	e8 a5 ae 03 00       	call   0x1011a800
100df95b:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
100df962:	10 
100df963:	83 c4 14             	add    esp,0x14
100df966:	0f 2f 44 24 50       	comiss xmm0,DWORD PTR [esp+0x50]
100df96b:	0f 86 88 00 00 00    	jbe    0x100df9f9
100df971:	f3 0f 10 4c 24 54    	movss  xmm1,DWORD PTR [esp+0x54]
100df977:	f3 0f 10 54 24 58    	movss  xmm2,DWORD PTR [esp+0x58]
100df97d:	f3 0f 5c 53 04       	subss  xmm2,DWORD PTR [ebx+0x4]
100df982:	f3 0f 5c 0b          	subss  xmm1,DWORD PTR [ebx]
100df986:	f3 0f 10 44 24 5c    	movss  xmm0,DWORD PTR [esp+0x5c]
100df98c:	f3 0f 5c 43 08       	subss  xmm0,DWORD PTR [ebx+0x8]
100df991:	f3 0f 59 d2          	mulss  xmm2,xmm2
100df995:	f3 0f 59 c9          	mulss  xmm1,xmm1
100df999:	f3 0f 59 c0          	mulss  xmm0,xmm0
100df99d:	f3 0f 58 d1          	addss  xmm2,xmm1
100df9a1:	0f 57 c9             	xorps  xmm1,xmm1
100df9a4:	f3 0f 58 d0          	addss  xmm2,xmm0
100df9a8:	0f 5a c2             	cvtps2pd xmm0,xmm2
100df9ab:	66 0f 2e c8          	ucomisd xmm1,xmm0
100df9af:	77 06                	ja     0x100df9b7
100df9b1:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100df9b5:	eb 05                	jmp    0x100df9bc
100df9b7:	e8 d4 c4 08 00       	call   0x1016be90
100df9bc:	0f 57 c9             	xorps  xmm1,xmm1
100df9bf:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
100df9c3:	f3 0f 10 44 24 0c    	movss  xmm0,DWORD PTR [esp+0xc]
100df9c9:	0f 2f c1             	comiss xmm0,xmm1
100df9cc:	76 2b                	jbe    0x100df9f9
100df9ce:	0f 10 44 24 40       	movups xmm0,XMMWORD PTR [esp+0x40]
100df9d3:	f3 0f 11 4c 24 0c    	movss  DWORD PTR [esp+0xc],xmm1
100df9d9:	0f 11 07             	movups XMMWORD PTR [edi],xmm0
100df9dc:	0f 10 44 24 50       	movups xmm0,XMMWORD PTR [esp+0x50]
100df9e1:	0f 11 47 10          	movups XMMWORD PTR [edi+0x10],xmm0
100df9e5:	0f 10 44 24 60       	movups xmm0,XMMWORD PTR [esp+0x60]
100df9ea:	0f 11 47 20          	movups XMMWORD PTR [edi+0x20],xmm0
100df9ee:	f3 0f 7e 44 24 70    	movq   xmm0,QWORD PTR [esp+0x70]
100df9f4:	66 0f d6 47 30       	movq   QWORD PTR [edi+0x30],xmm0
100df9f9:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
100df9fd:	46                   	inc    esi
100df9fe:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
100dfa02:	83 fe 02             	cmp    esi,0x2
100dfa05:	0f 8c 05 ff ff ff    	jl     0x100df910
100dfa0b:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
100dfa0f:	40                   	inc    eax
100dfa10:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
100dfa14:	83 f8 02             	cmp    eax,0x2
100dfa17:	0f 8c e3 fe ff ff    	jl     0x100df900
100dfa1d:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
100dfa21:	41                   	inc    ecx
100dfa22:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
100dfa26:	83 f9 02             	cmp    ecx,0x2
100dfa29:	0f 8c c3 fe ff ff    	jl     0x100df8f2
100dfa2f:	5f                   	pop    edi
100dfa30:	5e                   	pop    esi
100dfa31:	5b                   	pop    ebx
100dfa32:	8b e5                	mov    esp,ebp
100dfa34:	5d                   	pop    ebp
100dfa35:	c2 14 00             	ret    0x14
