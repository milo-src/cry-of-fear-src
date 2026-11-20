
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10053800 <.text+0x52800>:
10053800:	56                   	push   esi
10053801:	6a 64                	push   0x64
10053803:	6a 00                	push   0x0
10053805:	83 ec 08             	sub    esp,0x8
10053808:	8b f1                	mov    esi,ecx
1005380a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1005380d:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10053814:	3f 
10053815:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1005381c:	68 08 08 1b 10       	push   0x101b0808
10053821:	6a 02                	push   0x2
10053823:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10053829:	e8 c2 91 0a 00       	call   0x100fc9f0
1005382e:	8b 06                	mov    eax,DWORD PTR [esi]
10053830:	83 c4 18             	add    esp,0x18
10053833:	8b ce                	mov    ecx,esi
10053835:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1005383c:	ff 50 08             	call   DWORD PTR [eax+0x8]
1005383f:	c7 46 78 20 2f 05 10 	mov    DWORD PTR [esi+0x78],0x10052f20
10053846:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1005384b:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1005384f:	f3 0f 58 05 24 97 1a 	addss  xmm0,DWORD PTR ds:0x101a9724
10053856:	10 
10053857:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1005385d:	f3 0f 11 80 08 03 00 	movss  DWORD PTR [eax+0x308],xmm0
10053864:	00 
10053865:	f3 0f 11 86 d4 01 00 	movss  DWORD PTR [esi+0x1d4],xmm0
1005386c:	00 
1005386d:	f3 0f 11 86 d0 01 00 	movss  DWORD PTR [esi+0x1d0],xmm0
10053874:	00 
10053875:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
1005387c:	00 
1005387d:	5e                   	pop    esi
1005387e:	c3                   	ret
