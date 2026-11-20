
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000e760 <.text+0xd760>:
1000e760:	55                   	push   ebp
1000e761:	8b ec                	mov    ebp,esp
1000e763:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1000e766:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1000e76c:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
1000e772:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
1000e775:	83 c4 04             	add    esp,0x4
1000e778:	85 c9                	test   ecx,ecx
1000e77a:	75 21                	jne    0x1000e79d
1000e77c:	8d 4d 10             	lea    ecx,[ebp+0x10]
1000e77f:	51                   	push   ecx
1000e780:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1000e783:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000e786:	50                   	push   eax
1000e787:	e8 94 07 00 00       	call   0x1000ef20
1000e78c:	83 c9 ff             	or     ecx,0xffffffff
1000e78f:	83 c4 10             	add    esp,0x10
1000e792:	83 7d 10 01          	cmp    DWORD PTR [ebp+0x10],0x1
1000e796:	0f 45 c1             	cmovne eax,ecx
1000e799:	5d                   	pop    ebp
1000e79a:	c2 0c 00             	ret    0xc
1000e79d:	51                   	push   ecx
1000e79e:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1000e7a1:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000e7a4:	50                   	push   eax
1000e7a5:	e8 76 07 00 00       	call   0x1000ef20
1000e7aa:	83 c4 10             	add    esp,0x10
1000e7ad:	5d                   	pop    ebp
1000e7ae:	c2 0c 00             	ret    0xc
