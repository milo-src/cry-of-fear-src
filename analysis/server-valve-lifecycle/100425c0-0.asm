
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100425c0 <.text+0x415c0>:
100425c0:	56                   	push   esi
100425c1:	8b f1                	mov    esi,ecx
100425c3:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100425c6:	83 b9 50 02 00 00 00 	cmp    DWORD PTR [ecx+0x250],0x0
100425cd:	0f 85 c7 00 00 00    	jne    0x1004269a
100425d3:	8b 81 54 02 00 00    	mov    eax,DWORD PTR [ecx+0x254]
100425d9:	83 e8 00             	sub    eax,0x0
100425dc:	74 1c                	je     0x100425fa
100425de:	83 e8 01             	sub    eax,0x1
100425e1:	74 10                	je     0x100425f3
100425e3:	83 e8 01             	sub    eax,0x1
100425e6:	0f 85 ae 00 00 00    	jne    0x1004269a
100425ec:	f3 0f 10 41 58       	movss  xmm0,DWORD PTR [ecx+0x58]
100425f1:	eb 0c                	jmp    0x100425ff
100425f3:	f3 0f 10 41 54       	movss  xmm0,DWORD PTR [ecx+0x54]
100425f8:	eb 05                	jmp    0x100425ff
100425fa:	f3 0f 10 41 50       	movss  xmm0,DWORD PTR [ecx+0x50]
100425ff:	66 0f 6e 89 48 02 00 	movd   xmm1,DWORD PTR [ecx+0x248]
10042606:	00 
10042607:	0f 5b c9             	cvtdq2ps xmm1,xmm1
1004260a:	0f 2f c1             	comiss xmm0,xmm1
1004260d:	0f 82 87 00 00 00    	jb     0x1004269a
10042613:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10042618:	51                   	push   ecx
10042619:	8b 89 cc 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1cc]
1004261f:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10042626:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1004262c:	6a 03                	push   0x3
1004262e:	56                   	push   esi
1004262f:	56                   	push   esi
10042630:	51                   	push   ecx
10042631:	e8 ba f9 0b 00       	call   0x10101ff0
10042636:	8b 06                	mov    eax,DWORD PTR [esi]
10042638:	83 c4 10             	add    esp,0x10
1004263b:	8b ce                	mov    ecx,esi
1004263d:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10042644:	ff 50 08             	call   DWORD PTR [eax+0x8]
10042647:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004264a:	68 78 00 1b 10       	push   0x101b0078
1004264f:	6a 06                	push   0x6
10042651:	c7 80 50 02 00 00 01 	mov    DWORD PTR [eax+0x250],0x1
10042658:	00 00 00 
1004265b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004265e:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10042664:	e8 27 c3 fd ff       	call   0x1001e990
10042669:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004266c:	83 c4 0c             	add    esp,0xc
1004266f:	6a 64                	push   0x64
10042671:	6a 00                	push   0x0
10042673:	83 ec 08             	sub    esp,0x8
10042676:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1004267d:	3f 
1004267e:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10042685:	68 a8 00 1b 10       	push   0x101b00a8
1004268a:	6a 03                	push   0x3
1004268c:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10042692:	e8 59 a3 0b 00       	call   0x100fc9f0
10042697:	83 c4 1c             	add    esp,0x1c
1004269a:	5e                   	pop    esi
1004269b:	c3                   	ret
