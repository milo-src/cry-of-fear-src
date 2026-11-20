
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100eb83a <.text+0xea83a>:
100eb83a:	83 bf 14 23 00 00 00 	cmp    DWORD PTR [edi+0x2314],0x0
100eb841:	0f 84 d0 00 00 00    	je     0x100eb917
100eb847:	83 bf 10 23 00 00 00 	cmp    DWORD PTR [edi+0x2310],0x0
100eb84e:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100eb851:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100eb857:	50                   	push   eax
100eb858:	6a 00                	push   0x0
100eb85a:	ff 35 44 65 22 10    	push   DWORD PTR ds:0x10226544
100eb860:	6a 01                	push   0x1
100eb862:	75 4c                	jne    0x100eb8b0
100eb864:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100eb86a:	6a 00                	push   0x0
100eb86c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100eb872:	6a 00                	push   0x0
100eb874:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100eb87a:	f3 0f 10 87 18 23 00 	movss  xmm0,DWORD PTR [edi+0x2318]
100eb881:	00 
100eb882:	83 c4 14             	add    esp,0x14
100eb885:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100eb88a:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100eb890:	68 f0 8b 1a 10       	push   0x101a8bf0
100eb895:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100eb89b:	83 c4 08             	add    esp,0x8
100eb89e:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100eb8a4:	c7 87 18 23 00 00 00 	mov    DWORD PTR [edi+0x2318],0x0
100eb8ab:	00 00 00 
100eb8ae:	eb 5d                	jmp    0x100eb90d
100eb8b0:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100eb8b6:	83 c4 10             	add    esp,0x10
100eb8b9:	80 bf 1c 23 00 00 00 	cmp    BYTE PTR [edi+0x231c],0x0
100eb8c0:	74 04                	je     0x100eb8c6
100eb8c2:	6a 01                	push   0x1
100eb8c4:	eb 02                	jmp    0x100eb8c8
100eb8c6:	6a 00                	push   0x0
100eb8c8:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100eb8ce:	83 c4 04             	add    esp,0x4
100eb8d1:	6a 01                	push   0x1
100eb8d3:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100eb8d9:	f3 0f 10 87 20 23 00 	movss  xmm0,DWORD PTR [edi+0x2320]
100eb8e0:	00 
100eb8e1:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100eb8e6:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100eb8ec:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100eb8f1:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100eb8f7:	03 87 10 23 00 00    	add    eax,DWORD PTR [edi+0x2310]
100eb8fd:	50                   	push   eax
100eb8fe:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100eb904:	83 c4 08             	add    esp,0x8
100eb907:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100eb90d:	c7 87 14 23 00 00 00 	mov    DWORD PTR [edi+0x2314],0x0
100eb914:	00 00 00 
