
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1013f490 <.text+0x13e490>:
1013f490:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1013f494:	0f b6 44 24 08       	movzx  eax,BYTE PTR [esp+0x8]
1013f499:	8b d7                	mov    edx,edi
1013f49b:	8b 7c 24 04          	mov    edi,DWORD PTR [esp+0x4]
1013f49f:	85 c9                	test   ecx,ecx
1013f4a1:	0f 84 3c 01 00 00    	je     0x1013f5e3
1013f4a7:	69 c0 01 01 01 01    	imul   eax,eax,0x1010101
1013f4ad:	83 f9 20             	cmp    ecx,0x20
1013f4b0:	0f 86 df 00 00 00    	jbe    0x1013f595
1013f4b6:	81 f9 80 00 00 00    	cmp    ecx,0x80
1013f4bc:	0f 82 8b 00 00 00    	jb     0x1013f54d
1013f4c2:	0f ba 25 f0 28 23 10 	bt     DWORD PTR ds:0x102328f0,0x1
1013f4c9:	01 
1013f4ca:	73 09                	jae    0x1013f4d5
1013f4cc:	f3 aa                	rep stos BYTE PTR es:[edi],al
1013f4ce:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1013f4d2:	8b fa                	mov    edi,edx
1013f4d4:	c3                   	ret
1013f4d5:	0f ba 25 10 bb 21 10 	bt     DWORD PTR ds:0x1021bb10,0x1
1013f4dc:	01 
1013f4dd:	0f 83 b2 00 00 00    	jae    0x1013f595
1013f4e3:	66 0f 6e c0          	movd   xmm0,eax
1013f4e7:	66 0f 70 c0 00       	pshufd xmm0,xmm0,0x0
1013f4ec:	03 cf                	add    ecx,edi
1013f4ee:	0f 11 07             	movups XMMWORD PTR [edi],xmm0
1013f4f1:	83 c7 10             	add    edi,0x10
1013f4f4:	83 e7 f0             	and    edi,0xfffffff0
1013f4f7:	2b cf                	sub    ecx,edi
1013f4f9:	81 f9 80 00 00 00    	cmp    ecx,0x80
1013f4ff:	76 4c                	jbe    0x1013f54d
1013f501:	8d a4 24 00 00 00 00 	lea    esp,[esp+0x0]
1013f508:	8d a4 24 00 00 00 00 	lea    esp,[esp+0x0]
1013f50f:	90                   	nop
1013f510:	66 0f 7f 07          	movdqa XMMWORD PTR [edi],xmm0
1013f514:	66 0f 7f 47 10       	movdqa XMMWORD PTR [edi+0x10],xmm0
1013f519:	66 0f 7f 47 20       	movdqa XMMWORD PTR [edi+0x20],xmm0
1013f51e:	66 0f 7f 47 30       	movdqa XMMWORD PTR [edi+0x30],xmm0
1013f523:	66 0f 7f 47 40       	movdqa XMMWORD PTR [edi+0x40],xmm0
1013f528:	66 0f 7f 47 50       	movdqa XMMWORD PTR [edi+0x50],xmm0
1013f52d:	66 0f 7f 47 60       	movdqa XMMWORD PTR [edi+0x60],xmm0
1013f532:	66 0f 7f 47 70       	movdqa XMMWORD PTR [edi+0x70],xmm0
1013f537:	8d bf 80 00 00 00    	lea    edi,[edi+0x80]
1013f53d:	81 e9 80 00 00 00    	sub    ecx,0x80
1013f543:	f7 c1 00 ff ff ff    	test   ecx,0xffffff00
1013f549:	75 c5                	jne    0x1013f510
1013f54b:	eb 13                	jmp    0x1013f560
1013f54d:	0f ba 25 10 bb 21 10 	bt     DWORD PTR ds:0x1021bb10,0x1
1013f554:	01 
1013f555:	73 3e                	jae    0x1013f595
1013f557:	66 0f 6e c0          	movd   xmm0,eax
1013f55b:	66 0f 70 c0 00       	pshufd xmm0,xmm0,0x0
1013f560:	83 f9 20             	cmp    ecx,0x20
1013f563:	72 1c                	jb     0x1013f581
1013f565:	f3 0f 7f 07          	movdqu XMMWORD PTR [edi],xmm0
1013f569:	f3 0f 7f 47 10       	movdqu XMMWORD PTR [edi+0x10],xmm0
1013f56e:	83 c7 20             	add    edi,0x20
1013f571:	83 e9 20             	sub    ecx,0x20
1013f574:	83 f9 20             	cmp    ecx,0x20
1013f577:	73 ec                	jae    0x1013f565
1013f579:	f7 c1 1f 00 00 00    	test   ecx,0x1f
1013f57f:	74 62                	je     0x1013f5e3
1013f581:	8d 7c 0f e0          	lea    edi,[edi+ecx*1-0x20]
1013f585:	f3 0f 7f 07          	movdqu XMMWORD PTR [edi],xmm0
1013f589:	f3 0f 7f 47 10       	movdqu XMMWORD PTR [edi+0x10],xmm0
1013f58e:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1013f592:	8b fa                	mov    edi,edx
1013f594:	c3                   	ret
1013f595:	f7 c1 03 00 00 00    	test   ecx,0x3
1013f59b:	74 0e                	je     0x1013f5ab
1013f59d:	88 07                	mov    BYTE PTR [edi],al
1013f59f:	47                   	inc    edi
1013f5a0:	83 e9 01             	sub    ecx,0x1
1013f5a3:	f7 c1 03 00 00 00    	test   ecx,0x3
1013f5a9:	75 f2                	jne    0x1013f59d
1013f5ab:	f7 c1 04 00 00 00    	test   ecx,0x4
1013f5b1:	74 08                	je     0x1013f5bb
1013f5b3:	89 07                	mov    DWORD PTR [edi],eax
1013f5b5:	83 c7 04             	add    edi,0x4
1013f5b8:	83 e9 04             	sub    ecx,0x4
1013f5bb:	f7 c1 f8 ff ff ff    	test   ecx,0xfffffff8
1013f5c1:	74 20                	je     0x1013f5e3
1013f5c3:	8d a4 24 00 00 00 00 	lea    esp,[esp+0x0]
1013f5ca:	8d 9b 00 00 00 00    	lea    ebx,[ebx+0x0]
1013f5d0:	89 07                	mov    DWORD PTR [edi],eax
1013f5d2:	89 47 04             	mov    DWORD PTR [edi+0x4],eax
1013f5d5:	83 c7 08             	add    edi,0x8
1013f5d8:	83 e9 08             	sub    ecx,0x8
1013f5db:	f7 c1 f8 ff ff ff    	test   ecx,0xfffffff8
1013f5e1:	75 ed                	jne    0x1013f5d0
1013f5e3:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1013f5e7:	8b fa                	mov    edi,edx
1013f5e9:	c3                   	ret
