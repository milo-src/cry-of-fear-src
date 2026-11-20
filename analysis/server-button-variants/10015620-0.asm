
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10015620 <.text+0x14620>:
10015620:	55                   	push   ebp
10015621:	8b ec                	mov    ebp,esp
10015623:	53                   	push   ebx
10015624:	56                   	push   esi
10015625:	8b f1                	mov    esi,ecx
10015627:	e8 d4 d6 ff ff       	call   0x10012d00
1001562c:	8b d8                	mov    ebx,eax
1001562e:	85 db                	test   ebx,ebx
10015630:	0f 84 c1 00 00 00    	je     0x100156f7
10015636:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
10015639:	c7 46 7c 00 00 00 00 	mov    DWORD PTR [esi+0x7c],0x0
10015640:	8b 82 0c 02 00 00    	mov    eax,DWORD PTR [edx+0x20c]
10015646:	85 c0                	test   eax,eax
10015648:	75 0e                	jne    0x10015658
1001564a:	50                   	push   eax
1001564b:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
10015651:	83 c4 04             	add    esp,0x4
10015654:	85 c0                	test   eax,eax
10015656:	74 03                	je     0x1001565b
10015658:	8b 40 7c             	mov    eax,DWORD PTR [eax+0x7c]
1001565b:	57                   	push   edi
1001565c:	50                   	push   eax
1001565d:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
10015663:	e8 d8 20 00 00       	call   0x10017740
10015668:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
1001566e:	e8 0d 21 00 00       	call   0x10017780
10015673:	85 c0                	test   eax,eax
10015675:	74 7f                	je     0x100156f6
10015677:	83 fb 02             	cmp    ebx,0x2
1001567a:	75 73                	jne    0x100156ef
1001567c:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1001567f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10015684:	6a 64                	push   0x64
10015686:	6a 00                	push   0x0
10015688:	8b 8a ec 01 00 00    	mov    ecx,DWORD PTR [edx+0x1ec]
1001568e:	83 ec 08             	sub    esp,0x8
10015691:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10015697:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1001569e:	3f 
1001569f:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100156a6:	51                   	push   ecx
100156a7:	53                   	push   ebx
100156a8:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
100156ae:	e8 3d 73 0e 00       	call   0x100fc9f0
100156b3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100156b6:	83 c4 1c             	add    esp,0x1c
100156b9:	f6 80 a4 01 00 00 20 	test   BYTE PTR [eax+0x1a4],0x20
100156c0:	75 1d                	jne    0x100156df
100156c2:	51                   	push   ecx
100156c3:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100156ca:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
100156d0:	6a 03                	push   0x3
100156d2:	e8 b9 20 00 00       	call   0x10017790
100156d7:	50                   	push   eax
100156d8:	8b ce                	mov    ecx,esi
100156da:	e8 51 d2 0e 00       	call   0x10102930
100156df:	8b ce                	mov    ecx,esi
100156e1:	e8 6a d6 ff ff       	call   0x10012d50
100156e6:	5f                   	pop    edi
100156e7:	5e                   	pop    esi
100156e8:	33 c0                	xor    eax,eax
100156ea:	5b                   	pop    ebx
100156eb:	5d                   	pop    ebp
100156ec:	c2 10 00             	ret    0x10
100156ef:	8b ce                	mov    ecx,esi
100156f1:	e8 8a d3 ff ff       	call   0x10012a80
100156f6:	5f                   	pop    edi
100156f7:	5e                   	pop    esi
100156f8:	33 c0                	xor    eax,eax
100156fa:	5b                   	pop    ebx
100156fb:	5d                   	pop    ebp
100156fc:	c2 10 00             	ret    0x10
