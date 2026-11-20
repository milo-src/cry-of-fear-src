
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101026e0 <.text+0x1016e0>:
101026e0:	55                   	push   ebp
101026e1:	8b ec                	mov    ebp,esp
101026e3:	83 e4 f8             	and    esp,0xfffffff8
101026e6:	83 ec 1c             	sub    esp,0x1c
101026e9:	56                   	push   esi
101026ea:	8b f1                	mov    esi,ecx
101026ec:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
101026ef:	85 c0                	test   eax,eax
101026f1:	74 2c                	je     0x1010271f
101026f3:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
101026f6:	f3 0f 10 9e 58 01 00 	movss  xmm3,DWORD PTR [esi+0x158]
101026fd:	00 
101026fe:	f3 0f 10 40 0c       	movss  xmm0,DWORD PTR [eax+0xc]
10102703:	f3 0f 10 50 10       	movss  xmm2,DWORD PTR [eax+0x10]
10102708:	f3 0f 58 58 08       	addss  xmm3,DWORD PTR [eax+0x8]
1010270d:	f3 0f 58 86 5c 01 00 	addss  xmm0,DWORD PTR [esi+0x15c]
10102714:	00 
10102715:	f3 0f 58 96 60 01 00 	addss  xmm2,DWORD PTR [esi+0x160]
1010271c:	00 
1010271d:	eb 2a                	jmp    0x10102749
1010271f:	f3 0f 7e 86 58 01 00 	movq   xmm0,QWORD PTR [esi+0x158]
10102726:	00 
10102727:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1010272d:	66 0f d6 44 24 14    	movq   QWORD PTR [esp+0x14],xmm0
10102733:	f3 0f 10 44 24 18    	movss  xmm0,DWORD PTR [esp+0x18]
10102739:	f3 0f 10 5c 24 14    	movss  xmm3,DWORD PTR [esp+0x14]
1010273f:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10102743:	f3 0f 10 54 24 1c    	movss  xmm2,DWORD PTR [esp+0x1c]
10102749:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1010274c:	f3 0f 10 49 08       	movss  xmm1,DWORD PTR [ecx+0x8]
10102751:	0f 2e d9             	ucomiss xmm3,xmm1
10102754:	9f                   	lahf
10102755:	f6 c4 44             	test   ah,0x44
10102758:	7a 20                	jp     0x1010277a
1010275a:	0f 2e 41 0c          	ucomiss xmm0,DWORD PTR [ecx+0xc]
1010275e:	9f                   	lahf
1010275f:	f6 c4 44             	test   ah,0x44
10102762:	7a 16                	jp     0x1010277a
10102764:	0f 2e 51 10          	ucomiss xmm2,DWORD PTR [ecx+0x10]
10102768:	9f                   	lahf
10102769:	f6 c4 44             	test   ah,0x44
1010276c:	7a 0c                	jp     0x1010277a
1010276e:	8b ce                	mov    ecx,esi
10102770:	e8 8b fe ff ff       	call   0x10102600
10102775:	5e                   	pop    esi
10102776:	8b e5                	mov    esp,ebp
10102778:	5d                   	pop    ebp
10102779:	c3                   	ret
1010277a:	f3 0f 5c 41 0c       	subss  xmm0,DWORD PTR [ecx+0xc]
1010277f:	f3 0f 5c 51 10       	subss  xmm2,DWORD PTR [ecx+0x10]
10102784:	f3 0f 5c d9          	subss  xmm3,xmm1
10102788:	0f 28 c8             	movaps xmm1,xmm0
1010278b:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
10102791:	f3 0f 59 c8          	mulss  xmm1,xmm0
10102795:	0f 28 c3             	movaps xmm0,xmm3
10102798:	f3 0f 11 5c 24 08    	movss  DWORD PTR [esp+0x8],xmm3
1010279e:	f3 0f 59 c3          	mulss  xmm0,xmm3
101027a2:	f3 0f 11 54 24 10    	movss  DWORD PTR [esp+0x10],xmm2
101027a8:	f3 0f 58 c8          	addss  xmm1,xmm0
101027ac:	0f 28 c2             	movaps xmm0,xmm2
101027af:	f3 0f 59 c2          	mulss  xmm0,xmm2
101027b3:	f3 0f 58 c8          	addss  xmm1,xmm0
101027b7:	0f 5a c1             	cvtps2pd xmm0,xmm1
101027ba:	0f 57 c9             	xorps  xmm1,xmm1
101027bd:	66 0f 2e c8          	ucomisd xmm1,xmm0
101027c1:	77 06                	ja     0x101027c9
101027c3:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
101027c7:	eb 05                	jmp    0x101027ce
101027c9:	e8 c2 96 06 00       	call   0x1016be90
101027ce:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
101027d2:	8b 06                	mov    eax,DWORD PTR [esi]
101027d4:	6a 01                	push   0x1
101027d6:	51                   	push   ecx
101027d7:	8b ce                	mov    ecx,esi
101027d9:	f3 0f 5e 86 64 01 00 	divss  xmm0,DWORD PTR [esi+0x164]
101027e0:	00 
101027e1:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
101027e7:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
101027ec:	ff 50 04             	call   DWORD PTR [eax+0x4]
101027ef:	f3 0f 10 44 24 04    	movss  xmm0,DWORD PTR [esp+0x4]
101027f5:	83 ec 0c             	sub    esp,0xc
101027f8:	f3 0f 10 4c 24 14    	movss  xmm1,DWORD PTR [esp+0x14]
101027fe:	8b c4                	mov    eax,esp
10102800:	f3 0f 5e c8          	divss  xmm1,xmm0
10102804:	c7 46 78 00 26 10 10 	mov    DWORD PTR [esi+0x78],0x10102600
1010280b:	56                   	push   esi
1010280c:	f3 0f 11 08          	movss  DWORD PTR [eax],xmm1
10102810:	f3 0f 10 4c 24 1c    	movss  xmm1,DWORD PTR [esp+0x1c]
10102816:	f3 0f 5e c8          	divss  xmm1,xmm0
1010281a:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
1010281f:	f3 0f 10 4c 24 20    	movss  xmm1,DWORD PTR [esp+0x20]
10102825:	f3 0f 5e c8          	divss  xmm1,xmm0
10102829:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
1010282e:	e8 9d 26 fc ff       	call   0x100c4ed0
10102833:	83 c4 10             	add    esp,0x10
10102836:	5e                   	pop    esi
10102837:	8b e5                	mov    esp,ebp
10102839:	5d                   	pop    ebp
1010283a:	c3                   	ret
