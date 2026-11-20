
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10117770 <.text+0x116770>:
10117770:	55                   	push   ebp
10117771:	8b ec                	mov    ebp,esp
10117773:	ff 75 10             	push   DWORD PTR [ebp+0x10]
10117776:	e8 a5 29 00 00       	call   0x1011a120
1011777b:	83 c4 04             	add    esp,0x4
1011777e:	85 c0                	test   eax,eax
10117780:	74 6e                	je     0x101177f0
10117782:	83 7d 10 ff          	cmp    DWORD PTR [ebp+0x10],0xffffffff
10117786:	74 68                	je     0x101177f0
10117788:	83 7d 14 00          	cmp    DWORD PTR [ebp+0x14],0x0
1011778c:	74 62                	je     0x101177f0
1011778e:	f3 0f 10 45 20       	movss  xmm0,DWORD PTR [ebp+0x20]
10117793:	83 ec 0c             	sub    esp,0xc
10117796:	f3 0f 11 44 24 08    	movss  DWORD PTR [esp+0x8],xmm0
1011779c:	f3 0f 10 45 1c       	movss  xmm0,DWORD PTR [ebp+0x1c]
101177a1:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
101177a7:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
101177ac:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
101177b1:	6a 00                	push   0x0
101177b3:	51                   	push   ecx
101177b4:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
101177b7:	c7 04 24 00 00 80 3e 	mov    DWORD PTR [esp],0x3e800000
101177be:	6a 00                	push   0x0
101177c0:	83 ec 0c             	sub    esp,0xc
101177c3:	8b 01                	mov    eax,DWORD PTR [ecx]
101177c5:	8b d4                	mov    edx,esp
101177c7:	6a 01                	push   0x1
101177c9:	89 02                	mov    DWORD PTR [edx],eax
101177cb:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
101177ce:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
101177d1:	8b 41 08             	mov    eax,DWORD PTR [ecx+0x8]
101177d4:	b9 0c 58 1e 10       	mov    ecx,0x101e580c
101177d9:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
101177dc:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101177e1:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
101177e7:	51                   	push   ecx
101177e8:	e8 73 c8 f7 ff       	call   0x10094060
101177ed:	83 c4 2c             	add    esp,0x2c
101177f0:	5d                   	pop    ebp
101177f1:	c3                   	ret
