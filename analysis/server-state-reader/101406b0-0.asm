
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101406b0 <.text+0x13f6b0>:
101406b0:	57                   	push   edi
101406b1:	56                   	push   esi
101406b2:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
101406b6:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
101406ba:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
101406be:	8b c1                	mov    eax,ecx
101406c0:	8b d1                	mov    edx,ecx
101406c2:	03 c6                	add    eax,esi
101406c4:	3b fe                	cmp    edi,esi
101406c6:	76 08                	jbe    0x101406d0
101406c8:	3b f8                	cmp    edi,eax
101406ca:	0f 82 94 02 00 00    	jb     0x10140964
101406d0:	83 f9 20             	cmp    ecx,0x20
101406d3:	0f 82 d2 04 00 00    	jb     0x10140bab
101406d9:	81 f9 80 00 00 00    	cmp    ecx,0x80
101406df:	73 13                	jae    0x101406f4
101406e1:	0f ba 25 10 bb 21 10 	bt     DWORD PTR ds:0x1021bb10,0x1
101406e8:	01 
101406e9:	0f 82 8e 04 00 00    	jb     0x10140b7d
101406ef:	e9 e3 01 00 00       	jmp    0x101408d7
101406f4:	0f ba 25 f0 28 23 10 	bt     DWORD PTR ds:0x102328f0,0x1
101406fb:	01 
101406fc:	73 09                	jae    0x10140707
101406fe:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
10140700:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10140704:	5e                   	pop    esi
10140705:	5f                   	pop    edi
10140706:	c3                   	ret
10140707:	8b c7                	mov    eax,edi
10140709:	33 c6                	xor    eax,esi
1014070b:	a9 0f 00 00 00       	test   eax,0xf
10140710:	75 0e                	jne    0x10140720
10140712:	0f ba 25 10 bb 21 10 	bt     DWORD PTR ds:0x1021bb10,0x1
10140719:	01 
1014071a:	0f 82 e0 03 00 00    	jb     0x10140b00
10140720:	0f ba 25 f0 28 23 10 	bt     DWORD PTR ds:0x102328f0,0x0
10140727:	00 
10140728:	0f 83 a9 01 00 00    	jae    0x101408d7
1014072e:	f7 c7 03 00 00 00    	test   edi,0x3
10140734:	0f 85 9d 01 00 00    	jne    0x101408d7
1014073a:	f7 c6 03 00 00 00    	test   esi,0x3
10140740:	0f 85 ac 01 00 00    	jne    0x101408f2
10140746:	0f ba e7 02          	bt     edi,0x2
1014074a:	73 0d                	jae    0x10140759
1014074c:	8b 06                	mov    eax,DWORD PTR [esi]
1014074e:	83 e9 04             	sub    ecx,0x4
10140751:	8d 76 04             	lea    esi,[esi+0x4]
10140754:	89 07                	mov    DWORD PTR [edi],eax
10140756:	8d 7f 04             	lea    edi,[edi+0x4]
10140759:	0f ba e7 03          	bt     edi,0x3
1014075d:	73 11                	jae    0x10140770
1014075f:	f3 0f 7e 0e          	movq   xmm1,QWORD PTR [esi]
10140763:	83 e9 08             	sub    ecx,0x8
10140766:	8d 76 08             	lea    esi,[esi+0x8]
10140769:	66 0f d6 0f          	movq   QWORD PTR [edi],xmm1
1014076d:	8d 7f 08             	lea    edi,[edi+0x8]
10140770:	f7 c6 07 00 00 00    	test   esi,0x7
10140776:	74 65                	je     0x101407dd
10140778:	0f ba e6 03          	bt     esi,0x3
1014077c:	0f 83 b4 00 00 00    	jae    0x10140836
10140782:	66 0f 6f 4e f4       	movdqa xmm1,XMMWORD PTR [esi-0xc]
10140787:	8d 76 f4             	lea    esi,[esi-0xc]
1014078a:	8b ff                	mov    edi,edi
1014078c:	66 0f 6f 5e 10       	movdqa xmm3,XMMWORD PTR [esi+0x10]
10140791:	83 e9 30             	sub    ecx,0x30
10140794:	66 0f 6f 46 20       	movdqa xmm0,XMMWORD PTR [esi+0x20]
10140799:	66 0f 6f 6e 30       	movdqa xmm5,XMMWORD PTR [esi+0x30]
1014079e:	8d 76 30             	lea    esi,[esi+0x30]
101407a1:	83 f9 30             	cmp    ecx,0x30
101407a4:	66 0f 6f d3          	movdqa xmm2,xmm3
101407a8:	66 0f 3a 0f d9 0c    	palignr xmm3,xmm1,0xc
101407ae:	66 0f 7f 1f          	movdqa XMMWORD PTR [edi],xmm3
101407b2:	66 0f 6f e0          	movdqa xmm4,xmm0
101407b6:	66 0f 3a 0f c2 0c    	palignr xmm0,xmm2,0xc
101407bc:	66 0f 7f 47 10       	movdqa XMMWORD PTR [edi+0x10],xmm0
101407c1:	66 0f 6f cd          	movdqa xmm1,xmm5
101407c5:	66 0f 3a 0f ec 0c    	palignr xmm5,xmm4,0xc
101407cb:	66 0f 7f 6f 20       	movdqa XMMWORD PTR [edi+0x20],xmm5
101407d0:	8d 7f 30             	lea    edi,[edi+0x30]
101407d3:	73 b7                	jae    0x1014078c
101407d5:	8d 76 0c             	lea    esi,[esi+0xc]
101407d8:	e9 af 00 00 00       	jmp    0x1014088c
101407dd:	66 0f 6f 4e f8       	movdqa xmm1,XMMWORD PTR [esi-0x8]
101407e2:	8d 76 f8             	lea    esi,[esi-0x8]
101407e5:	8d 49 00             	lea    ecx,[ecx+0x0]
101407e8:	66 0f 6f 5e 10       	movdqa xmm3,XMMWORD PTR [esi+0x10]
101407ed:	83 e9 30             	sub    ecx,0x30
101407f0:	66 0f 6f 46 20       	movdqa xmm0,XMMWORD PTR [esi+0x20]
101407f5:	66 0f 6f 6e 30       	movdqa xmm5,XMMWORD PTR [esi+0x30]
101407fa:	8d 76 30             	lea    esi,[esi+0x30]
101407fd:	83 f9 30             	cmp    ecx,0x30
10140800:	66 0f 6f d3          	movdqa xmm2,xmm3
10140804:	66 0f 3a 0f d9 08    	palignr xmm3,xmm1,0x8
1014080a:	66 0f 7f 1f          	movdqa XMMWORD PTR [edi],xmm3
1014080e:	66 0f 6f e0          	movdqa xmm4,xmm0
10140812:	66 0f 3a 0f c2 08    	palignr xmm0,xmm2,0x8
10140818:	66 0f 7f 47 10       	movdqa XMMWORD PTR [edi+0x10],xmm0
1014081d:	66 0f 6f cd          	movdqa xmm1,xmm5
10140821:	66 0f 3a 0f ec 08    	palignr xmm5,xmm4,0x8
10140827:	66 0f 7f 6f 20       	movdqa XMMWORD PTR [edi+0x20],xmm5
1014082c:	8d 7f 30             	lea    edi,[edi+0x30]
1014082f:	73 b7                	jae    0x101407e8
10140831:	8d 76 08             	lea    esi,[esi+0x8]
10140834:	eb 56                	jmp    0x1014088c
10140836:	66 0f 6f 4e fc       	movdqa xmm1,XMMWORD PTR [esi-0x4]
1014083b:	8d 76 fc             	lea    esi,[esi-0x4]
1014083e:	8b ff                	mov    edi,edi
10140840:	66 0f 6f 5e 10       	movdqa xmm3,XMMWORD PTR [esi+0x10]
10140845:	83 e9 30             	sub    ecx,0x30
10140848:	66 0f 6f 46 20       	movdqa xmm0,XMMWORD PTR [esi+0x20]
1014084d:	66 0f 6f 6e 30       	movdqa xmm5,XMMWORD PTR [esi+0x30]
10140852:	8d 76 30             	lea    esi,[esi+0x30]
10140855:	83 f9 30             	cmp    ecx,0x30
10140858:	66 0f 6f d3          	movdqa xmm2,xmm3
1014085c:	66 0f 3a 0f d9 04    	palignr xmm3,xmm1,0x4
10140862:	66 0f 7f 1f          	movdqa XMMWORD PTR [edi],xmm3
10140866:	66 0f 6f e0          	movdqa xmm4,xmm0
1014086a:	66 0f 3a 0f c2 04    	palignr xmm0,xmm2,0x4
10140870:	66 0f 7f 47 10       	movdqa XMMWORD PTR [edi+0x10],xmm0
10140875:	66 0f 6f cd          	movdqa xmm1,xmm5
10140879:	66 0f 3a 0f ec 04    	palignr xmm5,xmm4,0x4
1014087f:	66 0f 7f 6f 20       	movdqa XMMWORD PTR [edi+0x20],xmm5
10140884:	8d 7f 30             	lea    edi,[edi+0x30]
10140887:	73 b7                	jae    0x10140840
10140889:	8d 76 04             	lea    esi,[esi+0x4]
1014088c:	83 f9 10             	cmp    ecx,0x10
1014088f:	72 13                	jb     0x101408a4
10140891:	f3 0f 6f 0e          	movdqu xmm1,XMMWORD PTR [esi]
10140895:	83 e9 10             	sub    ecx,0x10
10140898:	8d 76 10             	lea    esi,[esi+0x10]
1014089b:	66 0f 7f 0f          	movdqa XMMWORD PTR [edi],xmm1
1014089f:	8d 7f 10             	lea    edi,[edi+0x10]
101408a2:	eb e8                	jmp    0x1014088c
101408a4:	0f ba e1 02          	bt     ecx,0x2
101408a8:	73 0d                	jae    0x101408b7
101408aa:	8b 06                	mov    eax,DWORD PTR [esi]
101408ac:	83 e9 04             	sub    ecx,0x4
101408af:	8d 76 04             	lea    esi,[esi+0x4]
101408b2:	89 07                	mov    DWORD PTR [edi],eax
101408b4:	8d 7f 04             	lea    edi,[edi+0x4]
101408b7:	0f ba e1 03          	bt     ecx,0x3
101408bb:	73 11                	jae    0x101408ce
101408bd:	f3 0f 7e 0e          	movq   xmm1,QWORD PTR [esi]
101408c1:	83 e9 08             	sub    ecx,0x8
101408c4:	8d 76 08             	lea    esi,[esi+0x8]
101408c7:	66 0f d6 0f          	movq   QWORD PTR [edi],xmm1
101408cb:	8d 7f 08             	lea    edi,[edi+0x8]
101408ce:	8b 04 8d 14 09 14 10 	mov    eax,DWORD PTR [ecx*4+0x10140914]
101408d5:	ff e0                	jmp    eax
101408d7:	f7 c7 03 00 00 00    	test   edi,0x3
101408dd:	74 13                	je     0x101408f2
101408df:	8a 06                	mov    al,BYTE PTR [esi]
101408e1:	88 07                	mov    BYTE PTR [edi],al
101408e3:	49                   	dec    ecx
101408e4:	83 c6 01             	add    esi,0x1
101408e7:	83 c7 01             	add    edi,0x1
101408ea:	f7 c7 03 00 00 00    	test   edi,0x3
101408f0:	75 ed                	jne    0x101408df
101408f2:	8b d1                	mov    edx,ecx
101408f4:	83 f9 20             	cmp    ecx,0x20
101408f7:	0f 82 ae 02 00 00    	jb     0x10140bab
101408fd:	c1 e9 02             	shr    ecx,0x2
10140900:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10140902:	83 e2 03             	and    edx,0x3
10140905:	ff 24 95 14 09 14 10 	jmp    DWORD PTR [edx*4+0x10140914]
