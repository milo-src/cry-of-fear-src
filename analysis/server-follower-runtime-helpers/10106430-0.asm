
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10106430 <.text+0x105430>:
10106430:	55                   	push   ebp
10106431:	8b ec                	mov    ebp,esp
10106433:	83 e4 f8             	and    esp,0xfffffff8
10106436:	83 ec 08             	sub    esp,0x8
10106439:	56                   	push   esi
1010643a:	8b f1                	mov    esi,ecx
1010643c:	57                   	push   edi
1010643d:	8d be 8c 01 00 00    	lea    edi,[esi+0x18c]
10106443:	8b cf                	mov    ecx,edi
10106445:	e8 36 13 f1 ff       	call   0x10017780
1010644a:	85 c0                	test   eax,eax
1010644c:	0f 84 91 00 00 00    	je     0x101064e3
10106452:	8b cf                	mov    ecx,edi
10106454:	e8 47 13 f1 ff       	call   0x100177a0
10106459:	8b c8                	mov    ecx,eax
1010645b:	8b 10                	mov    edx,DWORD PTR [eax]
1010645d:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
10106463:	85 c0                	test   eax,eax
10106465:	74 7c                	je     0x101064e3
10106467:	8b 76 04             	mov    esi,DWORD PTR [esi+0x4]
1010646a:	8b cf                	mov    ecx,edi
1010646c:	e8 2f 13 f1 ff       	call   0x100177a0
10106471:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10106474:	f3 0f 10 48 08       	movss  xmm1,DWORD PTR [eax+0x8]
10106479:	f3 0f 10 50 0c       	movss  xmm2,DWORD PTR [eax+0xc]
1010647e:	f3 0f 5c 56 0c       	subss  xmm2,DWORD PTR [esi+0xc]
10106483:	f3 0f 5c 4e 08       	subss  xmm1,DWORD PTR [esi+0x8]
10106488:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
1010648d:	f3 0f 5c 46 10       	subss  xmm0,DWORD PTR [esi+0x10]
10106492:	f3 0f 59 d2          	mulss  xmm2,xmm2
10106496:	f3 0f 59 c9          	mulss  xmm1,xmm1
1010649a:	f3 0f 59 c0          	mulss  xmm0,xmm0
1010649e:	f3 0f 58 d1          	addss  xmm2,xmm1
101064a2:	0f 57 c9             	xorps  xmm1,xmm1
101064a5:	f3 0f 58 d0          	addss  xmm2,xmm0
101064a9:	0f 5a c2             	cvtps2pd xmm0,xmm2
101064ac:	66 0f 2e c8          	ucomisd xmm1,xmm0
101064b0:	77 18                	ja     0x101064ca
101064b2:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
101064b6:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
101064ba:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
101064c0:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
101064c4:	5f                   	pop    edi
101064c5:	5e                   	pop    esi
101064c6:	8b e5                	mov    esp,ebp
101064c8:	5d                   	pop    ebp
101064c9:	c3                   	ret
101064ca:	e8 c1 59 06 00       	call   0x1016be90
101064cf:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
101064d3:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
101064d9:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
101064dd:	5f                   	pop    edi
101064de:	5e                   	pop    esi
101064df:	8b e5                	mov    esp,ebp
101064e1:	5d                   	pop    ebp
101064e2:	c3                   	ret
101064e3:	d9 05 68 bb 1b 10    	fld    DWORD PTR ds:0x101bbb68
101064e9:	5f                   	pop    edi
101064ea:	5e                   	pop    esi
101064eb:	8b e5                	mov    esp,ebp
101064ed:	5d                   	pop    ebp
101064ee:	c3                   	ret
