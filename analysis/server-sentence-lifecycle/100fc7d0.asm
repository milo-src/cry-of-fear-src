
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fc7d0 <.text+0xfb7d0>:
100fc7d0:	55                   	push   ebp
100fc7d1:	8b ec                	mov    ebp,esp
100fc7d3:	56                   	push   esi
100fc7d4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100fc7d7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100fc7da:	85 f6                	test   esi,esi
100fc7dc:	75 13                	jne    0x100fc7f1
100fc7de:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
100fc7e4:	85 c0                	test   eax,eax
100fc7e6:	74 06                	je     0x100fc7ee
100fc7e8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
100fc7ee:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100fc7f1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
100fc7f7:	85 c9                	test   ecx,ecx
100fc7f9:	74 07                	je     0x100fc802
100fc7fb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
100fc7fe:	85 c0                	test   eax,eax
100fc800:	75 27                	jne    0x100fc829
100fc802:	68 dc 00 00 00       	push   0xdc
100fc807:	51                   	push   ecx
100fc808:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
100fc80e:	83 c4 08             	add    esp,0x8
100fc811:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100fc814:	85 c0                	test   eax,eax
100fc816:	74 0c                	je     0x100fc824
100fc818:	c7 00 68 ec 1d 10    	mov    DWORD PTR [eax],0x101dec68
100fc81e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100fc821:	5e                   	pop    esi
100fc822:	5d                   	pop    ebp
100fc823:	c3                   	ret
100fc824:	33 c0                	xor    eax,eax
100fc826:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100fc829:	5e                   	pop    esi
100fc82a:	5d                   	pop    ebp
100fc82b:	c3                   	ret
