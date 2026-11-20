
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011f900 <.text+0x11e900>:
1011f900:	55                   	push   ebp
1011f901:	8b ec                	mov    ebp,esp
1011f903:	f3 0f 10 45 1c       	movss  xmm0,DWORD PTR [ebp+0x1c]
1011f908:	83 ec 0c             	sub    esp,0xc
1011f90b:	8b c4                	mov    eax,esp
1011f90d:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1011f911:	f3 0f 10 45 20       	movss  xmm0,DWORD PTR [ebp+0x20]
1011f916:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1011f91b:	f3 0f 10 45 24       	movss  xmm0,DWORD PTR [ebp+0x24]
1011f920:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1011f925:	f3 0f 2c 45 18       	cvttss2si eax,DWORD PTR [ebp+0x18]
1011f92a:	50                   	push   eax
1011f92b:	ff 75 14             	push   DWORD PTR [ebp+0x14]
1011f92e:	8d 45 08             	lea    eax,[ebp+0x8]
1011f931:	68 28 2f 22 10       	push   0x10222f28
1011f936:	50                   	push   eax
1011f937:	e8 34 7e ff ff       	call   0x10117770
1011f93c:	83 c4 1c             	add    esp,0x1c
1011f93f:	5d                   	pop    ebp
1011f940:	c3                   	ret
