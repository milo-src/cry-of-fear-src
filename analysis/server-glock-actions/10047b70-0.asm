
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10047b70 <.text+0x46b70>:
10047b70:	56                   	push   esi
10047b71:	8b f1                	mov    esi,ecx
10047b73:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
10047b7a:	74 4b                	je     0x10047bc7
10047b7c:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10047b82:	6a 01                	push   0x1
10047b84:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10047b87:	c7 80 64 01 00 00 00 	mov    DWORD PTR [eax+0x164],0x0
10047b8e:	00 00 00 
10047b91:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10047b97:	8b 01                	mov    eax,DWORD PTR [ecx]
10047b99:	ff 71 04             	push   DWORD PTR [ecx+0x4]
10047b9c:	ff 50 6c             	call   DWORD PTR [eax+0x6c]
10047b9f:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10047ba5:	6a 01                	push   0x1
10047ba7:	51                   	push   ecx
10047ba8:	83 ec 0c             	sub    esp,0xc
10047bab:	8b 01                	mov    eax,DWORD PTR [ecx]
10047bad:	54                   	push   esp
10047bae:	ff 90 04 01 00 00    	call   DWORD PTR [eax+0x104]
10047bb4:	6a 01                	push   0x1
10047bb6:	6a 00                	push   0x0
10047bb8:	68 f4 de 1a 10       	push   0x101adef4
10047bbd:	e8 7e ee 0c 00       	call   0x10116a40
10047bc2:	83 c4 20             	add    esp,0x20
10047bc5:	5e                   	pop    esi
10047bc6:	c3                   	ret
10047bc7:	8b 06                	mov    eax,DWORD PTR [esi]
10047bc9:	ff 90 90 01 00 00    	call   DWORD PTR [eax+0x190]
10047bcf:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10047bd4:	8b ce                	mov    ecx,esi
10047bd6:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10047bda:	8b 06                	mov    eax,DWORD PTR [esi]
10047bdc:	0f 5a c0             	cvtps2pd xmm0,xmm0
10047bdf:	f2 0f 58 05 18 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e18
10047be6:	10 
10047be7:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10047beb:	f3 0f 11 86 b0 01 00 	movss  DWORD PTR [esi+0x1b0],xmm0
10047bf2:	00 
10047bf3:	5e                   	pop    esi
10047bf4:	ff a0 7c 01 00 00    	jmp    DWORD PTR [eax+0x17c]
