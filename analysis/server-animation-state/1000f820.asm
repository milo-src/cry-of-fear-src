
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000f820 <.text+0xe820>:
1000f820:	55                   	push   ebp
1000f821:	8b ec                	mov    ebp,esp
1000f823:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000f826:	85 c0                	test   eax,eax
1000f828:	75 12                	jne    0x1000f83c
1000f82a:	68 a8 33 1a 10       	push   0x101a33a8
1000f82f:	6a 04                	push   0x4
1000f831:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000f837:	83 c4 08             	add    esp,0x8
1000f83a:	5d                   	pop    ebp
1000f83b:	c3                   	ret
1000f83c:	8b 88 90 00 00 00    	mov    ecx,DWORD PTR [eax+0x90]
1000f842:	03 c8                	add    ecx,eax
1000f844:	8b 80 8c 00 00 00    	mov    eax,DWORD PTR [eax+0x8c]
1000f84a:	56                   	push   esi
1000f84b:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
1000f84e:	3b c6                	cmp    eax,esi
1000f850:	0f 4c f0             	cmovl  esi,eax
1000f853:	85 f6                	test   esi,esi
1000f855:	7e 26                	jle    0x1000f87d
1000f857:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
1000f85a:	83 c1 44             	add    ecx,0x44
1000f85d:	83 c2 08             	add    edx,0x8
1000f860:	8b 42 f8             	mov    eax,DWORD PTR [edx-0x8]
1000f863:	8d 52 0c             	lea    edx,[edx+0xc]
1000f866:	89 41 fc             	mov    DWORD PTR [ecx-0x4],eax
1000f869:	8d 49 70             	lea    ecx,[ecx+0x70]
1000f86c:	8b 42 f0             	mov    eax,DWORD PTR [edx-0x10]
1000f86f:	89 41 90             	mov    DWORD PTR [ecx-0x70],eax
1000f872:	8b 42 f4             	mov    eax,DWORD PTR [edx-0xc]
1000f875:	89 41 94             	mov    DWORD PTR [ecx-0x6c],eax
1000f878:	83 ee 01             	sub    esi,0x1
1000f87b:	75 e3                	jne    0x1000f860
1000f87d:	5e                   	pop    esi
1000f87e:	5d                   	pop    ebp
1000f87f:	c3                   	ret
