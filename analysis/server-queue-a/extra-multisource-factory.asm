
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10012820 <.text+0x11820>:
10012820:	55                   	push   ebp
10012821:	8b ec                	mov    ebp,esp
10012823:	56                   	push   esi
10012824:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10012827:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1001282a:	85 f6                	test   esi,esi
1001282c:	75 13                	jne    0x10012841
1001282e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10012834:	85 c0                	test   eax,eax
10012836:	74 06                	je     0x1001283e
10012838:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1001283e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10012841:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10012847:	85 c9                	test   ecx,ecx
10012849:	74 07                	je     0x10012852
1001284b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1001284e:	85 c0                	test   eax,eax
10012850:	75 27                	jne    0x10012879
10012852:	68 64 02 00 00       	push   0x264
10012857:	51                   	push   ecx
10012858:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1001285e:	83 c4 08             	add    esp,0x8
10012861:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10012864:	85 c0                	test   eax,eax
10012866:	74 0c                	je     0x10012874
10012868:	c7 00 1c 49 1a 10    	mov    DWORD PTR [eax],0x101a491c
1001286e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10012871:	5e                   	pop    esi
10012872:	5d                   	pop    ebp
10012873:	c3                   	ret
10012874:	33 c0                	xor    eax,eax
10012876:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10012879:	5e                   	pop    esi
1001287a:	5d                   	pop    ebp
1001287b:	c3                   	ret
