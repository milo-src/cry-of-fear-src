
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10119810 <.text+0x118810>:
10119810:	55                   	push   ebp
10119811:	8b ec                	mov    ebp,esp
10119813:	80 7d 14 00          	cmp    BYTE PTR [ebp+0x14],0x0
10119817:	75 4c                	jne    0x10119865
10119819:	56                   	push   esi
1011981a:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1011981d:	85 f6                	test   esi,esi
1011981f:	74 72                	je     0x10119893
10119821:	8b 06                	mov    eax,DWORD PTR [esi]
10119823:	8b ce                	mov    ecx,esi
10119825:	ff 90 d4 00 00 00    	call   DWORD PTR [eax+0xd4]
1011982b:	85 c0                	test   eax,eax
1011982d:	74 64                	je     0x10119893
1011982f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10119832:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10119838:	6a 00                	push   0x0
1011983a:	ff 35 68 65 22 10    	push   DWORD PTR ds:0x10226568
10119840:	6a 08                	push   0x8
10119842:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10119848:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1011984b:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10119851:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10119854:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
1011985a:	83 c4 18             	add    esp,0x18
1011985d:	5e                   	pop    esi
1011985e:	5d                   	pop    ebp
1011985f:	ff 25 04 30 22 10    	jmp    DWORD PTR ds:0x10223004
10119865:	6a 00                	push   0x0
10119867:	6a 00                	push   0x0
10119869:	ff 35 68 65 22 10    	push   DWORD PTR ds:0x10226568
1011986f:	6a 02                	push   0x2
10119871:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10119877:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1011987a:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10119880:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10119883:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
10119889:	83 c4 18             	add    esp,0x18
1011988c:	5d                   	pop    ebp
1011988d:	ff 25 04 30 22 10    	jmp    DWORD PTR ds:0x10223004
10119893:	5e                   	pop    esi
10119894:	5d                   	pop    ebp
10119895:	c3                   	ret
