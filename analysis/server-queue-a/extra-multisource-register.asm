
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100145b0 <.text+0x135b0>:
100145b0:	56                   	push   esi
100145b1:	8b f1                	mov    esi,ecx
100145b3:	57                   	push   edi
100145b4:	68 00 01 00 00       	push   0x100
100145b9:	6a 00                	push   0x0
100145bb:	8d 86 dc 00 00 00    	lea    eax,[esi+0xdc]
100145c1:	c7 86 5c 02 00 00 00 	mov    DWORD PTR [esi+0x25c],0x0
100145c8:	00 00 00 
100145cb:	50                   	push   eax
100145cc:	e8 bf ae 12 00       	call   0x1013f490
100145d1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100145d4:	c7 46 78 d0 28 10 10 	mov    DWORD PTR [esi+0x78],0x101028d0
100145db:	8b 88 d0 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d0]
100145e1:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100145e6:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100145ec:	51                   	push   ecx
100145ed:	6a 00                	push   0x0
100145ef:	e8 ec 3e 10 00       	call   0x101184e0
100145f4:	8b f8                	mov    edi,eax
100145f6:	83 c4 14             	add    esp,0x14
100145f9:	85 ff                	test   edi,edi
100145fb:	74 4a                	je     0x10014647
100145fd:	0f 1f 00             	nop    DWORD PTR [eax]
10014600:	8b 8e 5c 02 00 00    	mov    ecx,DWORD PTR [esi+0x25c]
10014606:	83 f9 20             	cmp    ecx,0x20
10014609:	7d 3c                	jge    0x10014647
1001460b:	8d 41 01             	lea    eax,[ecx+0x1]
1001460e:	8d 0c cd dc 00 00 00 	lea    ecx,[ecx*8+0xdc]
10014615:	89 86 5c 02 00 00    	mov    DWORD PTR [esi+0x25c],eax
1001461b:	57                   	push   edi
1001461c:	03 ce                	add    ecx,esi
1001461e:	e8 1d 31 00 00       	call   0x10017740
10014623:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10014626:	8b 88 d0 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d0]
1001462c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10014631:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10014637:	51                   	push   ecx
10014638:	57                   	push   edi
10014639:	e8 a2 3e 10 00       	call   0x101184e0
1001463e:	8b f8                	mov    edi,eax
10014640:	83 c4 08             	add    esp,0x8
10014643:	85 ff                	test   edi,edi
10014645:	75 b9                	jne    0x10014600
10014647:	68 90 55 1a 10       	push   0x101a5590
1001464c:	6a 00                	push   0x0
1001464e:	e8 0d 3e 10 00       	call   0x10118460
10014653:	8b f8                	mov    edi,eax
10014655:	83 c4 08             	add    esp,0x8
10014658:	85 ff                	test   edi,edi
1001465a:	74 56                	je     0x100146b2
1001465c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10014660:	83 be 5c 02 00 00 20 	cmp    DWORD PTR [esi+0x25c],0x20
10014667:	7d 52                	jge    0x100146bb
10014669:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001466c:	8b cf                	mov    ecx,edi
1001466e:	8b 17                	mov    edx,DWORD PTR [edi]
10014670:	ff b0 d0 01 00 00    	push   DWORD PTR [eax+0x1d0]
10014676:	ff 92 c8 00 00 00    	call   DWORD PTR [edx+0xc8]
1001467c:	85 c0                	test   eax,eax
1001467e:	74 1e                	je     0x1001469e
10014680:	8b 8e 5c 02 00 00    	mov    ecx,DWORD PTR [esi+0x25c]
10014686:	57                   	push   edi
10014687:	8d 41 01             	lea    eax,[ecx+0x1]
1001468a:	8d 0c cd dc 00 00 00 	lea    ecx,[ecx*8+0xdc]
10014691:	89 86 5c 02 00 00    	mov    DWORD PTR [esi+0x25c],eax
10014697:	03 ce                	add    ecx,esi
10014699:	e8 a2 30 00 00       	call   0x10017740
1001469e:	68 90 55 1a 10       	push   0x101a5590
100146a3:	57                   	push   edi
100146a4:	e8 b7 3d 10 00       	call   0x10118460
100146a9:	8b f8                	mov    edi,eax
100146ab:	83 c4 08             	add    esp,0x8
100146ae:	85 ff                	test   edi,edi
100146b0:	75 ae                	jne    0x10014660
100146b2:	83 be 5c 02 00 00 20 	cmp    DWORD PTR [esi+0x25c],0x20
100146b9:	7c 27                	jl     0x100146e2
100146bb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100146be:	6a 20                	push   0x20
100146c0:	8b 88 d0 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d0]
100146c6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100146cb:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100146d1:	51                   	push   ecx
100146d2:	68 a0 55 1a 10       	push   0x101a55a0
100146d7:	6a 01                	push   0x1
100146d9:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100146df:	83 c4 10             	add    esp,0x10
100146e2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100146e5:	5f                   	pop    edi
100146e6:	5e                   	pop    esi
100146e7:	83 a0 a4 01 00 00 fd 	and    DWORD PTR [eax+0x1a4],0xfffffffd
100146ee:	c3                   	ret
