
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1002c7d0 <.text+0x2b7d0>:
1002c7d0:	55                   	push   ebp
1002c7d1:	8b ec                	mov    ebp,esp
1002c7d3:	51                   	push   ecx
1002c7d4:	56                   	push   esi
1002c7d5:	8b f1                	mov    esi,ecx
1002c7d7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1002c7da:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
1002c7e1:	75 23                	jne    0x1002c806
1002c7e3:	68 54 cb 1a 10       	push   0x101acb54
1002c7e8:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
1002c7ee:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1002c7f1:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1002c7f6:	83 c4 04             	add    esp,0x4
1002c7f9:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
1002c800:	9f                   	lahf
1002c801:	f6 c4 44             	test   ah,0x44
1002c804:	7b 37                	jnp    0x1002c83d
1002c806:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1002c809:	85 c9                	test   ecx,ecx
1002c80b:	74 39                	je     0x1002c846
1002c80d:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1002c810:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1002c813:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
1002c819:	89 82 98 02 00 00    	mov    DWORD PTR [edx+0x298],eax
1002c81f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1002c822:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
1002c829:	75 1b                	jne    0x1002c846
1002c82b:	6a 00                	push   0x0
1002c82d:	6a 00                	push   0x0
1002c82f:	68 00 00 40 00       	push   0x400000
1002c834:	e8 c7 07 0b 00       	call   0x100dd000
1002c839:	84 c0                	test   al,al
1002c83b:	75 09                	jne    0x1002c846
1002c83d:	56                   	push   esi
1002c83e:	e8 bd d0 0e 00       	call   0x10119900
1002c843:	83 c4 04             	add    esp,0x4
1002c846:	5e                   	pop    esi
1002c847:	8b e5                	mov    esp,ebp
1002c849:	5d                   	pop    ebp
1002c84a:	c2 04 00             	ret    0x4
